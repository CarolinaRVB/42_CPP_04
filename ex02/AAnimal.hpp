/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:37:53 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/21 19:06:56 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

/*
	Abstract class --> one pure function means the class doesn't have a complete implementation
	How?
		Pure virtual functions
*/

class AAnimal {

	public:

		AAnimal();
		AAnimal(const AAnimal& aanimal);
		virtual ~AAnimal();


		AAnimal& operator=(const AAnimal& aanimal);

		virtual void	makeSound() const = 0;
		virtual void	setIdeas(std::string idea) const;
		virtual void 	showIdea(int index) const;
		std::string		getType() const;
		
	protected:

		std::string _type;
};


#endif