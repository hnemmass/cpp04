/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:14:21 by hnemmass          #+#    #+#             */
/*   Updated: 2026/02/14 15:33:53 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class Character: virtual public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
        static AMateria* unequippedMaterias[1000]; 
        static int unequippedCount;
	
	public:
		Character();
		Character(const std::string &s);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		static void cleanupUnequippedMaterias();
		void use(int idx, ICharacter& target);
};

#endif