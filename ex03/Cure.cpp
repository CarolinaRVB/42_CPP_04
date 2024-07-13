/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:25:16 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/13 10:21:30 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
	std::cout << "Default constructor Cure called\n";
}

Cure::Cure(const Cure& cure) : AMateria(cure) {
	*this = cure;
	std::cout << "Copy constructor Cure called\n";
}

Cure& Cure::operator=(const Cure& cure) {

	if (this == &cure) return (*this);
	this->_type = cure._type;
	
	std::cout << "Assignement operator for Cure called\n";
	return (*this);
}

Cure::~Cure() {
	std::cout << "Default destructor called\n";
}

Cure* Cure::clone() const {
	return (new Cure(*this));
}

void    Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}