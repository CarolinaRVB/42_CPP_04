/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:42:45 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 19:11:57 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	
	std::cout << "Default constructor for character\n";
};

Character::Character(const Character& character) : _name(character._name) {
	for (int i = 0; i < 100; i++) {
		if (character._characters[i])
			this->_characters[i] = character._characters[i]->clone();
		else
			this->_characters[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		if (character.materias[i])
			this->materias[i] = character.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	std::cout << "Copy constructor for character\n";
}

Character::Character(std::string character) : _name (character) {
	for (int i = 0; i < 100; i++) {
		this->_characters[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		this->materias[i] = NULL;
	}
	std::cout << "Name constructor for character\n";
};

Character&  Character::operator=(const Character& character) {
	
	if (this->_name == character._name) return (*this);
	
	this->_name = character._name;
	for (int i = 0; i < 4; i++) {
		if (this->materias[i])
			delete this->materias[i];
		if (character.materias[i])
			this->materias[i] = character.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	for (int i = 0; i < 100; i++) {
		if (this->_characters[i])
			delete this->_characters[i];
		if (character._characters[i])
			this->_characters[i] = character._characters[i]->clone();
		else
			this->_characters[i] = NULL;
	}
	std::cout << "Copy assignement constructor for character\n";
	return (*this);
};

Character::~Character() {
	for (int i = 0; i < 100; i++) {
		if (this->_characters[i]){
			delete this->_characters[i];
			this->_characters[i] = NULL;
		}
	}
	std::cout << "Destructor for character\n";
}

std::string const & Character::getName() const {
	return (this->_name);
};

void Character::equip(AMateria* m) {
	int i = 0;
	for (i = 0; (i < 4  && this->materias[i]); i++) {
	}
	if (i == 4)
		std::cout << "Error Full Stock: Can't equip more Materias!\n";
	else {
		this->materias[i] = m;
		for (i = 0; (i < 100 && this->_characters[i]); i++) {
		}
		if (i < 100){
			this->_characters[i] = m;
		}
		std::cout << "Materia was equiped\n";
	}
};

void Character::unequip(int idx) {
	
	if(!this->materias[idx]){
		std::cout << "Materia does't exist!\n";
		return ;
	}
	this->materias[idx] = NULL;
	std::cout << "Materia was unequiped\n";
};

void Character::use(int idx, ICharacter& target) {
	if (this->materias[idx] == 0){
		std::cout << "This slot is empty\n";
		return ;
	}

	std::cout << this->getName() << " used ";
	this->materias[idx]->use(target);
};