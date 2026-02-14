/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:14:38 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:47:57 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

AMateria* Character::unequippedMaterias[1000] = {NULL};
int Character::unequippedCount = 0;

Character::Character():
name("Default")
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL; 
}

Character::Character(const std::string &s):
name(s)
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL; 
}

Character::Character(const Character &other)
{
	// std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = other.name;
}

Character &Character::operator=(const Character &other)
{
	// std::cout << "Character assignment operator '=' called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = other.name;
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (!m)
		return ; 
	for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m) 
            return;
    }
	while (i < 4)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
		i++;
	}
	delete m;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx])
    {
        if (unequippedCount < 1000)
        {
            unequippedMaterias[unequippedCount] = this->inventory[idx];
            unequippedCount++;
        }
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx])
		{
			this->inventory[idx]->use(target);
		}
	}
	return ;
}

void Character::cleanupUnequippedMaterias()
{
    for (int i = 0; i < unequippedCount; ++i)
    {
        delete unequippedMaterias[i];
        unequippedMaterias[i] = NULL;
    }
    unequippedCount = 0;
}

Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}
