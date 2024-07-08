/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:17:13 by crebelo-          #+#    #+#             */
/*   Updated: 2024/07/05 13:19:32 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		WrongDog(const WrongDog& WrongDog);
		WrongDog& operator=(const WrongDog& WrongDog);

		void	makeSound() const;
		~WrongDog();
		
	private:
};



#endif