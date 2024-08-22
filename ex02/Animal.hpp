/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:37:53 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:11:17 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);

		virtual ~Animal();

		virtual void	makeSound() const;
		virtual void	setIdeas(std::string idea) const;
		virtual void showIdea(int index) const;
		std::string	getType() const;
		
	protected:
		std::string _type;
};


#endif