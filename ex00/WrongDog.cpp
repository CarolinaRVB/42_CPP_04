/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:16:32 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 13:19:20 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	this->_type = "WrongDog";
	std::cout << "Default constructor for WrongDog called\n";
}

WrongDog::WrongDog(const WrongDog& cat) :WrongAnimal() {
	*this = cat;
	std::cout << "Copy constructor for WrongDog called\n";
}

WrongDog&	WrongDog::operator=(const WrongDog& cat) {
	this->_type = cat._type;
	std::cout << "Copy assignement for WrongDog called\n";
	return (*this);
}

WrongDog::~WrongDog() {
	std::cout << "Destructor for WrongDog called\n";
}

void WrongDog::makeSound(void) const {
	std::cout << "WrongDog says WOOF\n";
}
