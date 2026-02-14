/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:58:33 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:09:24 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
Animal()
{
	std::cout << "the Cat constructor is called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other):
Animal()
{
	std::cout << "the Cat copy constructor is called" << std::endl;
	this->type = other.type;	
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "the Cat assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "the Cat destructor is called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!	Purr...	Hiss!	Mew!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}
