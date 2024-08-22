/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:56:22 by crebelo-          #+#    #+#             */
/*   Updated: 2024/08/21 20:00:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

/*
	The line class ICharacter; is a forward declaration. It tells the compiler
	that ICharacter is a class type that will be defined later. This allows the 
	compiler to know that ICharacter exists without needing its full definition 
	at that point in the code.
*/

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const AMateria& amateria);
		AMateria(std::string const & type);
		AMateria& operator=(const AMateria& amateria);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif