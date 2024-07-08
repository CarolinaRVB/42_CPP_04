/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:22 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:20:20 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brainDog (new Brain()) {
	this->_type = "Dog";
	std::cout << "Default constructor for Dog called\n";
}

Dog::Dog(const Dog& dog) : Animal() , brainDog (new Brain(*dog.brainDog)){
	*this = dog;
	std::cout << "Copy constructor for Dog called\n";
}

Dog&	Dog::operator=(const Dog& dog) {
	if (this == &dog) return *this;

	this->_type = dog._type;
	delete brainDog;
	brainDog = new Brain(*dog.brainDog);
	std::cout << "Copy assignement for Dog called\n";
	return (*this);
}

Dog::~Dog() {
	delete this->brainDog;
	std::cout << "Destructor for Dog called\n";
}

void Dog::makeSound(void) const {
	std::cout << "Dog says Woof\n";
}

void	Dog::setIdeas(std::string idea) const {
	this->brainDog->setIdeas(idea);
}

void Dog::showIdea(int index) const {
	std::cout << this->brainDog->showIdeas(index);
}
