/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:26 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 12:49:17 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type ("Creature") {
	std::cout << "Default constructor for Animal called\n";
}

Animal::Animal(const Animal& animal) {
	*this = animal;
	
	std::cout << "Copy constructor for Animal called\n";
}

Animal& Animal::operator=(const Animal &animal){

	this->_type = animal._type;

	std::cout << "Copy assignment for Animal called\n";
	
	return (*this);
}

Animal::~Animal(){
	std::cout << "Destructor for Animal called\n";
}

void	Animal::makeSound() const{
	std::cout << "Animal makes a sound\n";
}

std::string	Animal::getType() const {
	return (this->_type );
}