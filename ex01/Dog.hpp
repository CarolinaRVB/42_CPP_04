/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:17 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:20:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog& Dog);
		~Dog();

		void	makeSound() const;
		void	setIdeas(std::string idea) const;
		void showIdea(int index) const;
		
	private:
		Brain *brainDog;
};



#endif