/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:43 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:14:30 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
	
Animal::Animal()
{
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

std::string Animal::getType() const
{
	return (this->type);
}
