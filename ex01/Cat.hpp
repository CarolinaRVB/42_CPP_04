/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:11 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:12:38 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
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
