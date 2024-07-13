/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:56:21 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/09 19:33:59 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default constructor AMateria called\n";
}

AMateria::AMateria(const AMateria& amateria) {
	*this = amateria;
	std::cout << "Copy constructor AMateria called\n";
}

AMateria::AMateria(std::string const & type) {
	_type = type;
	std::cout << "Name constructor AMateria called\n";
}

AMateria& AMateria::operator=(const AMateria& amateria) {
	if (this == &amateria) return (*this);

	this->_type = amateria._type;
	std::cout << "Copy assignement operator AMateria called\n";

	return (*this);
}

AMateria::~AMateria() {
	std::cout << "Default destructor called\n";
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << this->getType() << " was used against " << target.getName() << std::endl;
}
