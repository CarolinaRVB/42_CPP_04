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

// issue was here, i had the protected _type variable here too
// check why this was leaving the cure empty in the main

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};


#endif