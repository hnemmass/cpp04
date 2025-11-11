/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:02 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/11 15:57:23 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	std::cout << "--------------------------" << std::endl;

	const Animal* i = new Cat();
	std::cout << "--------------------------" << std::endl;

	i->getIdeas();

	delete j;//should not create a leak
	std::cout << "--------------------------" << std::endl;

	delete i;
	std::cout << "--------------------------" << std::endl;

	return 0;
}