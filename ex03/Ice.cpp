/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:25:45 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:17:12 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
AMateria()
{
	// std::cout << "Ice Default constructor called" << std::endl;
	this->type = "ice";
	
}

Ice::Ice(const Ice &other):
AMateria()
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	// std::cout << "Ice asssignment operator '=' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice::Ice(const std::string &type)
{
	this->type = type;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

const std::string &Ice::getType() const
{
	return (this->type);
}

Ice *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
