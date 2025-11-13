/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:03:24 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/13 15:16:02 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongDog.hpp"

WrongDog::WrongDog():
WrongAnimal()
{
	std::cout << "the WrongDog constructor is called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &other):
WrongAnimal()
{
	std::cout << "the WrongDog copy constructor is called" << std::endl;
	this->type = other.type;	
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
	std::cout << "the WrongDog assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "the WrongDog destructor is called" << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "WrongWoof!	WrongBark!	WrongRuff!	WrongArf!" << std::endl;
}

std::string WrongDog::getType() const
{
	return (this->type);
}
