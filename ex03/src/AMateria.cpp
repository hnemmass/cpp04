/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:32:24 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/17 11:13:33 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	// std::cout << "AMateria asssignment operator '=' called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Default attack on " << target.getName() << std::endl;
}
