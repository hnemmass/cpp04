/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:02 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 18:13:32 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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

	std::cout << "--------------------------" << std::endl;
		a[0]->printIdeas();
	std::cout << "--------------------------" << std::endl;
	

	for (int j = 0; j < 10; j++)
	{
		std::cout << "--------------------------" << std::endl;
			delete a[j];
		std::cout << "--------------------------" << std::endl;
	}

	// ----------- testing WrongAnimals

	// WrongAnimal *a1[10];

	// for (int i = 0 ; i < 10; i++)
	// {
	// 	std::cout << "--------------------------" << std::endl;
	// 	if (i % 2 == 0)
	// 		a1[i] = new WrongDog();
	// 	else
	// 		a1[i] = new WrongCat();
	// 	std::cout << "--------------------------" << std::endl;
	// }


	// for (int j = 0; j < 10; j++)
	// {
	// 	std::cout << "--------------------------" << std::endl;
	// 		a1[j]->makeSound();
	// 	std::cout << "--------------------------" << std::endl;
	// }
	

	// for (int j = 0; j < 10; j++)
	// {
	// 	std::cout << "--------------------------" << std::endl;
	// 		std::cout << a1[j]->getType() << std::endl;
	// 	std::cout << "--------------------------" << std::endl;
	// }
	

	// for (int j = 0; j < 10; j++)
	// {
	// 	std::cout << "--------------------------" << std::endl;
	// 		delete a1[j];
	// 	std::cout << "--------------------------" << std::endl;
	// }
}
