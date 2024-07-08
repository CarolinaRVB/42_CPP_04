/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:46:33 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 23:06:12 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#include <iostream>

class MateriaSource : public IMateriaSource {
	private:
		AMateria* materias[4];
	
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& materiasource);
		MateriaSource& operator=(const MateriaSource& materiasource);
		
	
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif