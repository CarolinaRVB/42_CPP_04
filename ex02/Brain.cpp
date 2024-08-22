/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:56:41 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/16 12:11:48 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	std::cout << "Default constructor for Brain called\n";
}

Brain::Brain(const Brain& brain) {
	*this = brain;
	std::cout << "Copy constructor for Brain called\n";
}

Brain&	Brain::operator=(const Brain& brain) {
	*this->ideas = *brain.ideas;
	std::cout << "Copy assignment operator for Brain called\n";
	
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor for Brain was called\n";
}

void	Brain::setIdeas(std::string idea) {
	int i = 0;
	while (i < 100 && this->ideas[i][0]) {
		i++;
	}
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}

std::string Brain::showIdeas(int index) {
	if (index < 0 || index >= 100 )
		return ("WRONG INDEX");
	if (!this->ideas[index][0]) {
		return ("Empty thoughts\n");
	}
	return (this->ideas[index]);
}