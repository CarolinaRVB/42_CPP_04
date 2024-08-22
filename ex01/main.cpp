/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:28 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/16 12:23:45 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	const Animal* j = new Dog();
	std::cout << "\n  Animal base class and derived classes Brain and Dog were constructed \n\n";
	const Animal* i = new Cat();
	std::cout << "\n  Animal base class and derived classes Brain and Cat were constructed \n\n";
	
	const Animal* animals[10];
	std::cout << "\nDeclaration of an array of 10 pointers to objects from the Animals class\n\n";
	
	for (int i = 0; i < 5; i++){
		animals[i] = new Dog();
		std::cout << "Creation and assignement of pointer to derived class Dog and brain\n\n";
	}
	std::cout << "\n First five pointers were assigned to their Dog objects\n";
	
	for (int i = 5; i < 10; i++){
		animals[i] = new Cat();
		std::cout << "Creation and assignement of pointer to derived class Cat and brain\n\n";
		
	}
	std::cout << "\n Last five pointers were assigned to their Cat objects\n";
	
	std::cout << "\n################################### Testing ###################################\n\n";
	
	std::cout << "Setting new idea for animal at index 5\n";
	animals[5]->setIdeas("Cat had an idea\n");
	std::cout << "Showing first idea of animal at index 5: ";
	animals[5]->showIdea(0);
	std::cout << "Setting new idea for animal at index 5\n";
	animals[5]->setIdeas("Cat had an another briliant idea\n");
	std::cout << "Showing second idea of animal at index 5: ";
	animals[5]->showIdea(1);
	
	
	std::cout << "Showing ideas that are empty: " ;
	animals[5]->showIdea(2);
	std::cout << "Showing ideas that are out of bounds: " ;
	animals[5]->showIdea(100) ;
	std::cout << "Showing ideas that are out of bounds: " ;
	animals[5]->showIdea(-1);
	

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