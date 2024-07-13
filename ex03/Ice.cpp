/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:25:16 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/13 09:30:32 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
	std::cout << "Default constructor Ice called\n";
}

Ice::Ice(const Ice& ice) : AMateria(ice) {
	*this = ice;
	std::cout << "Copy constructor Ice called\n";
}

Ice& Ice::operator=(const Ice& ice) {
	if (this == &ice) return (*this);
	this->_type = ice._type;
	std::cout << "Assignement operator for Ice called\n";
	return (*this);
}

Ice::~Ice() {
	std::cout << "Default destructor called\n";
}

Ice* Ice::clone() const {
	return (new Ice(*this));	
}

void    Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}