/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:06:34 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 16:02:00 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(0, *me);
	bob->use(2, *me);
	bob->use(3, *me);
	
	me->unequip(1);
	me->unequip(1);
	bob->unequip(2);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	Character::cleanupUnequippedMaterias();
	
	return 0;
}