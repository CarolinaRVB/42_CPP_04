/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:40:28 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/16 09:59:05 by crebelo-         ###   ########.fr       */
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
	const Dog*	dog;

	
	std::cout << "\n\n";

	std::cout << "This animal is: " << j->getType() << " " << std::endl;
	std::cout << "This animal is: " << i->getType() << " " << std::endl;
	std::cout << "This animal is: " << 
	std::cout << "\n\n";


	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << "\n\n";

	delete j;
	delete i;
	delete meta;
	
	std::cout <<"\n\n";

	/*
		In the class declaration of wrongAnimal, we don't declare the function makeSound()
		in the base class as virtual, this means that altough we are calling the member function
		from a pointer to a base class that was assigned to an object of a derived class,
		we don't get the result from the member function of the derived class,
		we get it from the parent class because it was defined 
		at compile time

		getType(): It works correctly because each class's getType() function is specifically 
		returning a value based on the actual object’s type. There's no need for polymorphism
		because each class is independently implementing this method.

		makeSound(): Without virtual, C++ binds the function call at compile time, based on the type
		of the pointer/reference, not the actual object. As a result, it fails to call the derived class's
		version of makeSound() unless you declare it as virtual in the base class.

		Conclusion:
		getType() works correctly due to independent implementation in each derived class.
		makeSound() fails to exhibit polymorphic behavior without virtual and thus calls the base
		class version unless explicitly declared as virtual in the base class.

	*/
	
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongDog();
	const WrongAnimal* i2 = new WrongCat();
	std::cout <<"\n\n";

	std::cout << "This animal is: " << j2->getType() << " " << std::endl;
	std::cout << "This animal is: " << i2->getType() << " " << std::endl;
	std::cout <<"\n\n";

	i2->makeSound(); //will output the animal sound!
	j2->makeSound();
	meta2->makeSound();
	std::cout <<"\n\n";
	
	delete j2;
	delete i2;
	delete meta2;
	std::cout <<"\n\n";
	
	return 0;
}