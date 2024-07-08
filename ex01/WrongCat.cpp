/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:14:49 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 13:19:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "Default constructor for WrongCat called\n";
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal() {
	*this = cat;
	std::cout << "Copy constructor for WrongCat called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& cat) {
	this->_type = cat._type;
	std::cout << "Copy assignement for WrongCat called\n";
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor for WrongCat called\n";
}

void WrongCat::makeSound(void) const {
	std::cout << "WrongCat says Miau\n";
}
