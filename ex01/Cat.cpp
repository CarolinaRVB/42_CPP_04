/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:14 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:22:45 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brainCat (new Brain()) {
	this->_type = "Cat";
	std::cout << "Default constructor for Cat called\n";
}

Cat::Cat(const Cat& cat) : Animal(), brainCat (new Brain(*cat.brainCat)) {
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
	std::cout << this->brainCat->showIdeas(index);
}
