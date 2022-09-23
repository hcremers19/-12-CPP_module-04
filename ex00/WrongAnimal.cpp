/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:52:03 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/05 12:29:30 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A Wrong Animal is born" << std::endl;

	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;

	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A Wrong Animal has died" << std::endl;

	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	//if (this != &rhs)
		_type = rhs.getType();

	return *this;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal noises*" << std::endl;

	return;
}
