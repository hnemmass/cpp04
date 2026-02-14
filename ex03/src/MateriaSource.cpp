/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:57:53 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:38:45 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL; 
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	// std::cout << "MateriaSource assignment operator '=' called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete this->slots[i];
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *aMateria)
{
    if (!aMateria)
        return;

    for (int i = 0; i < 4; i++)
    {
        if (slots[i] == aMateria)
            return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])
        {
            slots[i] = aMateria;
            return;
        }
    }
    delete aMateria;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] && slots[i]->getType() == type)
			return (this->slots[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->slots[i])
			delete this->slots[i];
}
