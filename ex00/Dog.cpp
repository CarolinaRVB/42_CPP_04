/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:22 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 20:05:34 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Default constructor for Dog called\n";
}

Dog::Dog(const Dog& dog) : Animal() {
	*this = dog;
	std::cout << "Copy constructor for Dog called\n";
}

Dog&	Dog::operator=(const Dog& dog) {
	this->_type = dog._type;
	std::cout << "Copy assignement for Dog called\n";
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor for Dog called\n";
}

void Dog::makeSound(void) const {
	std::cout << "Dog says WOOF\n";
}
