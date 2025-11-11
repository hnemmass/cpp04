/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:02 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/11 17:04:04 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

int main()
{
	Animal *a[10];

	for (int i = 0 ; i < 10; i++)
	{
		std::cout << "--------------------------" << std::endl;
		if (i % 2 == 0)
			a[i] = new Dog();
		else
			a[i] = new Cat();
		std::cout << "--------------------------" << std::endl;
	}


	for (int j = 0; j < 10; j++)
	{
		std::cout << "--------------------------" << std::endl;
			a[j]->makeSound();
		std::cout << "--------------------------" << std::endl;
	}
	

	for (int j = 0; j < 10; j++)
	{
		std::cout << "--------------------------" << std::endl;
			std::cout << a[j]->getType() << std::endl;
		std::cout << "--------------------------" << std::endl;
	}
	

	for (int j = 0; j < 10; j++)
	{
		std::cout << "--------------------------" << std::endl;
			delete a[j];
		std::cout << "--------------------------" << std::endl;
	}
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	std::cout << "--------------------------" << std::endl;

// 	const Animal* i = new Cat();
// 	std::cout << "--------------------------" << std::endl;

// 	const Animal* k;
// 	std::cout << "--------------------------" << std::endl;

// 	Cat a;
// 	Cat b(a);
// 	Dog c;
// 	Dog d;

// 	d = c;
// 	k = j;
// 	std::cout << "--------------------------" << std::endl;

	 
// 	i->getIdeas();
// 	std::cout << "--------------------------" << std::endl;
	
// 	k->makeSound();
// 	std::cout << "--------------------------" << std::endl;

// 	delete j;//should not create a leak
// 	std::cout << "--------------------------" << std::endl;

// 	delete i;
// 	std::cout << "--------------------------" << std::endl;

// 	// delete k;
// 	std::cout << "--------------------------" << std::endl;

// 	return 0;
// }