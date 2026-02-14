/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:52:35 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:10:50 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
	
WrongAnimal::WrongAnimal()
{
	type = "default WrongAnimal";
	std::cout << "the WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "the WrongAnimal copy constructor is called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "the WrongAnimal assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "the WrongAnimal destructor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound not set yet" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
