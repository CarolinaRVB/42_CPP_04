/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:47:05 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/13 10:38:56 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <cstdio>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
	std::cout << "Default constructor MateriaSource called\n";
}

MateriaSource::MateriaSource(const MateriaSource& materiasource) {
	for (int i = 0; i < 4; i++) {
		materias[i] = materiasource.materias[i];
	}
	std::cout << "Copy constructor MateriaSource called\n";
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiasource) {
	for (int i = 0; i < 4; i++) {
		if (materias[i]) {
			delete materias[i];
			materias[i] = NULL;
		}
		else if (materiasource.materias[i])
			materias[i] = materiasource.materias[i];
	}
	
	std::cout << "Copy assignement operator MateriaSource called\n";

	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (materias[i]) {
            delete this->materias[i];
            materias[i] = NULL;
        }
	}
	std::cout << "Destructor MateriaSource called\n";
	
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;
	for (i = 0; i < 4 && materias[i]; i++) {
	}
	if (i < 4)
		materias[i] = m;
	else {
		delete m;
		std::cout << "Reached learning capacity!\n";
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (materias[i]){
			if (materias[i]->getType() == type)
				return (materias[i]->clone());
		}
	}
	std::cout << "Impossible to create that materia\n";
	return (0);
}