/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:58:33 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:11:06 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat():
Animal()
{
	std::cout << "the Cat constructor is called" << std::endl;
	this->b = new Brain;
	this->type = "Cat";
}

Cat::Cat(const Cat &other):
Animal()
{
	std::cout << "the Cat copy constructor is called" << std::endl;
	this->b = new Brain(*other.b);
	this->type = other.type;	
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "the Cat assignment operator '=' is called" << std::endl;
	if (this != &other)
	{
		delete this->b;
		this->b = new Brain(*other.b);
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	delete b;
	std::cout << "the CAT destructor is called and the BRAIN is deleted" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!	Purr...	Hiss!	Mew!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->b->ideas[i] << std::endl;
}
