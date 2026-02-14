/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:02:30 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:15:03 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():
WrongAnimal()
{
	std::cout << "the WrongCat constructor is called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other):
WrongAnimal()
{
	std::cout << "the WrongCat copy constructor is called" << std::endl;
	this->type = other.type;	
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "the WrongCat assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "the WrongCat destructor is called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeow!	WrongPurr...	WrongHiss!	WrongMew!" << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}
