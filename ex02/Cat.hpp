/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:11 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 17:46:34 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {
	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();

		void	makeSound() const;
		void	setIdeas(std::string idea) const;
		void showIdea(int index) const;

	private:
		Brain *brainCat;

};




#endif
