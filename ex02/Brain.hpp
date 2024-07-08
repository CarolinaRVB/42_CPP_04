/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:55:44 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 10:56:09 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		
		~Brain();
		
		void	setIdeas(std::string idea);
		std::string showIdeas(int index);
		
	private:
		std::string ideas[100];
		/* data */
};


#endif

