/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:28 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 11:21:22 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* animals[10];

	for (int i = 0; i < 5; i++){
		animals[i] = new Dog();
	}

	for (int i = 5; i < 10; i++){
		animals[i] = new Cat();
	}

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