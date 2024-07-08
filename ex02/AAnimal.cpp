/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:26 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:50:27 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type ("Creature") {
	std::cout << "Default constructor for AAnimal called\n";
}

AAnimal::AAnimal(const AAnimal& animal) {
	*this = animal;
	
	std::cout << "Copy constructor for AAnimal called\n";
}

AAnimal& AAnimal::operator=(const AAnimal &animal){

	this->_type = animal._type;

	std::cout << "Copy assignment for AAnimal called\n";
	
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "Destructor for AAnimal called\n";
}

void	AAnimal::makeSound() const{
	std::cout << "AAnimal makes a sound\n";
}

std::string	AAnimal::getType() const {
	return (this->_type );
}

void	AAnimal::setIdeas(std::string idea) const {
	(void)idea;
}

void AAnimal::showIdea(int index) const{
	(void)index;
}