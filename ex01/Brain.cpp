/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:46:48 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:13:04 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "the Brain constructor is called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "i have no idea";
}

Brain::Brain(const Brain &other)
{
	std::cout << "the Brain copy constructor is called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "the Brain assignment operator '=' is called" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "the Brain destructor is called" << std::endl;
}
