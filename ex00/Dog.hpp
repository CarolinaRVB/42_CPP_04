/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:17 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 12:52:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog& Dog);

		void	makeSound() const;
		~Dog();
		
	private:
};



#endif