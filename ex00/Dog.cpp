/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:58:24 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:10:39 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
Animal()
{
	std::cout << "the Dog constructor is called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other):
Animal()
{
	std::cout << "the Dog copy constructor is called" << std::endl;
	this->type = other.type;	
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "the Dog assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "the Dog destructor is called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!	Bark!	Ruff!	Arf!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}
