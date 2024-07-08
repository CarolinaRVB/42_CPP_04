/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:42:51 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 19:11:29 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
	
	private:
		std::string _name;
		std::string _index;
		AMateria *_characters[100];	// store addresses of every materia used;
		AMateria *materias[4];			// store pointers to materias in stock

	public:

		Character();
		Character(const Character& character);
		Character(std::string character);
		Character&  operator=(const Character& character);
		virtual ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};



#endif
