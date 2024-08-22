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
	_name = "unamed";
	for (int i = 0; i < 100; i++) {
		_allmaterias[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
	std::cout << "Default constructor for character\n";
};

Character::Character(const Character& character) : _name(character._name) {
	for (int i = 0; i < 100; i++) {
		if (character._allmaterias[i])
			_allmaterias[i] = character._allmaterias[i]->clone();
		else
			_allmaterias[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		if (character.materias[i])
			materias[i] = character.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	std::cout << "Copy constructor for character\n";
}

Character::Character(std::string character) : _name (character) {
	for (int i = 0; i < 100; i++) {
		_allmaterias[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
	std::cout << "Name constructor for character\n";
};

Character&  Character::operator=(const Character& character) {
	
	if (_name == character._name) return (*this);
	
	_name = character._name;
	for (int i = 0; i < 4; i++) {
		if (materias[i])
			delete materias[i];
		if (character.materias[i])
			materias[i] = character.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	for (int i = 0; i < 100; i++) {
		if (_allmaterias[i])
			delete _allmaterias[i];
		if (character._allmaterias[i])
			_allmaterias[i] = character._allmaterias[i]->clone();
		else
			_allmaterias[i] = NULL;
	}
	std::cout << "Copy assignement constructor for character\n";
	return (*this);
};

Character::~Character() {
	for (int i = 0; i < 100; i++) {
		if (_allmaterias[i]){
			delete _allmaterias[i];
			_allmaterias[i] = NULL;
		}
	}
	std::cout << "Destructor for character\n";
}

std::string const & Character::getName() const {
	return (_name);
};

void Character::equip(AMateria* m) {
	int i = 0;
	for (i = 0; (i < 4  && materias[i]); i++) {
	}
	if (i == 4) {
		delete m;
		std::cout << "Error Full Stock: Can't equip more Materias!\n";
	}
	else {
		materias[i] = m;
		for (i = 0; (i < 100 && _allmaterias[i]); i++) {
		}
		if (i < 100){
			_allmaterias[i] = m;
		}
		std::cout << "Materia was equiped\n";
	}
};

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3){
		std::cout << "Wrong index provided" << std::endl;
		return ;
	}
	else if(!materias[idx]){
		std::cout << "Materia does't exist!\n";
		return ;
	}
	materias[idx] = NULL;
	std::cout << "Materia was unequiped\n";
};

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3){
		std::cout << "Wrong index provided" << std::endl;
		return ;
	}
	else if (materias[idx] == 0){
		std::cout << "This slot is empty\n";
		return ;
	}

	std::cout << getName() << " used ";
	materias[idx]->use(target);
};