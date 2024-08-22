/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:53:34 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/21 20:13:01 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	std::cout << "\n";
	
	IMateriaSource* src = new MateriaSource();
		
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << "\n";


	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n";


	ICharacter* bob = new Character("bob");
	
	std::cout << "\n  ############# Wanted Output #############  \n\n";
	
	me->use(0, *bob);
	me->use(1, *bob);
	

	std::cout << "\n  ######################################## ";
	std::cout << "\n  ############# More Tests #############  \n\n";
	
	std::cout << "Creating more materias in the MateriaSource to reach maximum of 4 materias\n";
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << "Trying to add a 5th, message received:\n";
	
	src->learnMateria(new Cure());
	
	std::cout << "Adding more materias to the character me, reaching maximum of 4\n";
	
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	
	std::cout << "Trying to add a 5th, message received:\n";
	
	me->equip(src->createMateria("ice"));
	
	std::cout << "Unequipping more than the 4 materias:\n";
	
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);
	

	std::cout << "\n";
	std::cout << "Copying the Character Me to a Character Test \n";
	ICharacter* test = me;
	std::cout << "Test Character is " << test->getName() << std::endl;
	std::cout << "Checking if it has the same materias: \n";
	test->use(0, *bob);
	test->use(1, *bob);
	std::cout << std::endl;

	std::cout << "Trying to use wrong index materia: \n";
	test->use(4, *bob);
	std::cout << "Trying to unequip empty index materia: \n";
	test->unequip(3);
	std::cout << "Trying to unequip non-existant index materia: \n";
	test->unequip(4);




	std::cout << "\n  ########################################  \n\n";


	delete bob;
	delete me;
	delete src;
	
	std::cout << "\n\n";

	return 0;
}
