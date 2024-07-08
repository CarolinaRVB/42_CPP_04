/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:17 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 17:46:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
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