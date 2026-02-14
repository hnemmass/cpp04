/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:43 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:11:06 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
	
Animal::Animal()
{
	type = "default Animal";
	std::cout << "the Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "the Animal copy constructor is called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "the Animal assignment operator '=' is called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "the Animal destructor is called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "animal sound not set yet" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::printIdeas() const {}
