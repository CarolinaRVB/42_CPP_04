/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:20:27 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/09 00:26:41 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	protected:
		std::string _type;
	public:
		Ice();
		Ice(const Ice& ice);
		Ice(std::string const & type);
		Ice& operator=(const Ice& ice);
		~Ice();

		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);
};


#endif