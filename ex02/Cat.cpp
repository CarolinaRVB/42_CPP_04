/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:14 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/21 19:03:26 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brainCat (new Brain()) {
	_type = "Cat";
	for (int i = 0; i < 100; i++){
		brainCat->setIdeas("\0");
	}
	std::cout << "Default constructor for Cat called\n";
}

Cat::Cat(const Cat& cat) : AAnimal(), brainCat (new Brain(*cat.brainCat)) {
	*this = cat;
	std::cout << "Copy constructor for Cat called\n";
}

Cat&	Cat::operator=(const Cat& cat) {
	
	if (this == &cat) return *this;
	
	this->_type = cat._type;
	delete brainCat;
	brainCat = new Brain(*cat.brainCat);
	
	std::cout << "Copy assignement for Cat called\n";
	return (*this);
}

Cat::~Cat() {
	delete this->brainCat;
	std::cout << "Destructor for Cat called\n";
}

void Cat::makeSound(void) const {
	std::cout << "Cat says Miau\n";
}

void	Cat::setIdeas(std::string idea) const {
	this->brainCat->setIdeas(idea);
}

void Cat::showIdea(int index) const {
	if (index >= 0 && index < 100)
		std::cout << brainCat->showIdeas(index);
	else
		std::cout << "Index out of bounds, no ideas here\n";
}
