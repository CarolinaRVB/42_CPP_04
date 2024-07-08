/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:20:27 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/08 18:26:52 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	protected:
		std::string _type;
	public:
		Cure();
		Cure(const Cure& cure);
		Cure(std::string const & type);
		Cure& operator=(const Cure& cure);
		~Cure();

		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);
};


#endif