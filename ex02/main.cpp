/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:28 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/16 10:49:15 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


/*

	An abstract class in C++ is designed to be a base class for other classes.
	It serves as a blueprint for its derived classes, enforcing a common
	interface that the derived classes must implement.

	A pure virtual function is a virtual function that has no implementation in
	the base class. By assigning = 0 to the function declaration, you inform the 
	compiler that the derived classes must provide an implementation for this function.
	This mechanism enforces a contract, ensuring that all derived 
	classes implement the specified function.

*/

int main(){
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const AAnimal* animals[10];

	std::cout << "\n\n";
	// const AAnimal animal;

	for (int i = 0; i < 5; i++){
		animals[i] = new Dog();
	}
	std::cout << "\n\n";
	
	for (int i = 5; i < 10; i++){
		animals[i] = new Cat();
	}
	std::cout << "\n\n";
	
	std::cout << "\n################################### Testing ###################################\n\n";
	
	animals[5]->setIdeas("Cat had an idea\n");
	animals[5]->showIdea(0);
	animals[5]->setIdeas("Cat had an another briliant idea\n");
	animals[5]->showIdea(1);
	animals[5]->showIdea(2);
	std::cout << "\n";
	
	std::cout << "This animal is a " << animals[4]->getType() << std::endl;
	animals[4]->makeSound();

	std::cout << "This animal is a " << animals[5]->getType() << std::endl;
	animals[5]->makeSound();

	std::cout << "\n################################### Ending ###################################\n\n";
	

	for (int i = 0; i < 10; i++){
		delete animals[i];
	}
	
	
	delete j;//should not create a leak
	delete i;


	return 0;
}