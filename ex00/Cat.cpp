/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:14 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 17:47:29 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Default constructor for Cat called\n";
}

Cat::Cat(const Cat& cat) : Animal() {
	*this = cat;
	std::cout << "Copy constructor for Cat called\n";
}

Cat&	Cat::operator=(const Cat& cat) {
	this->_type = cat._type;
	std::cout << "Copy assignement for Cat called\n";
	return (*this);
}

Cat::~Cat() {
	std::cout << "Destructor for Cat called\n";
}

void Cat::makeSound(void) const {
	std::cout << "Cat says Miau\n";
}
