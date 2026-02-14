/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:58:24 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:11:06 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog():
Animal()
{
	std::cout << "the Dog constructor is called" << std::endl;
	this->b = new Brain;
	this->type = "Dog";
}

Dog::Dog(const Dog &other):
Animal()
{
	std::cout << "the Dog copy constructor is called" << std::endl;
	delete this->b;
	this->b = new Brain(*other.b);
	this->type = other.type;	
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "the Dog assignment operator '=' is called" << std::endl;
	if (this != &other)
	{
		delete this->b;
		this->b = new Brain(*other.b);
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete b;
	std::cout << "the DOG destructor is called and the BRAIN is deleted" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!	Bark!	Ruff!	Arf!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->b->ideas[i] << std::endl;
}
