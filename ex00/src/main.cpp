/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:52:02 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/13 15:19:55 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Dog.hpp"
#include "include/WrongDog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog d;

	d.makeSound();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	//wrongAnimals tests
	
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* j1 = new WrongDog();
	const WrongAnimal* i1 = new WrongCat();
	WrongDog d1;

	d1.makeSound();

	std::cout << j1->getType() << " " << std::endl;
	std::cout << i1->getType() << " " << std::endl;

	i1->makeSound();
	j1->makeSound();
	meta1->makeSound();

	delete meta;
	delete j;
	delete i;
	delete meta1;
	delete j1;
	delete i1;

	return 0;
}