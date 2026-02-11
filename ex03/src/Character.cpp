/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:14:38 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/11 20:12:32 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character():
name("Default")
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL; 
}

Character::Character(const std::string &s):
name(s)
{
	// std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL; 
}

Character::Character(const Character &other)
{
	// std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = other.name;
}

Character &Character::operator=(const Character &other)
{
	// std::cout << "Character assignment operator '=' called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = other.name;
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx])
		{
			this->inventory[idx]->use(target);
		}
	}
	return ;
}

Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}
