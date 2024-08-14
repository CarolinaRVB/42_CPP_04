/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:28 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 13:20:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n\n";

	std::cout << "This animal is: " << j->getType() << " " << std::endl;
	std::cout << "This animal is: " << i->getType() << " " << std::endl;
	
	std::cout << "\n\n";


	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << "\n\n";

	delete j;
	delete i;
	delete meta;
	
	std::cout <<"\n\n";

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongDog();
	const WrongAnimal* i2 = new WrongCat();
	std::cout <<"\n\n";

	std::cout << "This animal is: " << j2->getType() << " " << std::endl;
	std::cout << "This animal is: " << i2->getType() << " " << std::endl;
	std::cout <<"\n\n";

	i2->makeSound(); //will output the cat sound!
	j2->makeSound();
	meta2->makeSound();
	std::cout <<"\n\n";
	
	delete j2;
	delete i2;
	delete meta2;
	std::cout <<"\n\n";
	
	return 0;
}