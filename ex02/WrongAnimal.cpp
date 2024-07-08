/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:10:08 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 13:10:53 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type ("Creature") {
	std::cout << "Default constructor for WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal) {
	*this = animal;
	
	std::cout << "Copy constructor for WrongAnimal called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal){

	this->_type = animal._type;

	std::cout << "Copy assignment for WrongAnimal called\n";
	
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor for WrongAnimal called\n";
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal makes a sound\n";
}

std::string	WrongAnimal::getType() const {
	return (this->_type );
}