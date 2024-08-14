/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:11 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 15:17:42 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

		void	makeSound() const;
		~Cat();

	private:
};




#endif
