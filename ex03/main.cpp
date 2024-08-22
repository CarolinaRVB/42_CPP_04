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
	std::cout << "\n\n";
	
	IMateriaSource* src = new MateriaSource();
	
	std::cout << "\n\n";
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << "\n\n";

	std::cout << "\n\n";
	
	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << "\n\n";


	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n\n";


	ICharacter* bob = new Character("bob");
	
	std::cout << "\n  ############# Wanted Output #############  \n\n";
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << "\n  ########################################  \n\n";


	std::cout << "\n  ############# More Tests #############  \n\n";

	std::cout << "\n  ########################################  \n\n";


	delete bob;
	delete me;
	delete src;
	
	std::cout << "\n\n";

	return 0;
}
