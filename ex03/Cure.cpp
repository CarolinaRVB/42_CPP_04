/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:25:16 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/09 00:26:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type ("cure") {
	std::cout << "Default constructor Cure called\n";
}

Cure::Cure(std::string const & type) : _type(type) {
	std::cout << "Name constructor Cure called\n";
}

Cure::Cure(const Cure& cure) : AMateria() {
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

std::string const & Cure::getType() const {
	return (this->_type);
}

Cure* Cure::clone() const {
	return (new Cure(*this));
}

void    Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}