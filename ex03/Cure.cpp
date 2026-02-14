/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:24:51 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:17:06 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
AMateria()
{
	// std::cout << "Cure Default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &other):
AMateria()
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	// std::cout << "Cure asssignment operator '=' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure::Cure(const std::string &type)
{
	this->type = type;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

const std::string &Cure::getType() const
{
	return (this->type);
}

Cure *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'" "s wounds *" << std::endl;
}
