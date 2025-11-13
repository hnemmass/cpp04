/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:03:06 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/13 15:16:32 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "../include/WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog &other);
		WrongDog &operator=(const WrongDog &other);
		~WrongDog();

		void makeSound() const;
		std::string getType() const;
};

#endif