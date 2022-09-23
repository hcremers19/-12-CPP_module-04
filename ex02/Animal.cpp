/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:52:03 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/23 11:40:37 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An Animal is born" << std::endl;

	return;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "A " << _type << " is born" << std::endl;

	return;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	return;
}

Animal::~Animal()
{
	std::cout << "The animal is dead" << std::endl;

	return;
}

Animal		&Animal::operator=(const Animal &rhs)
{
	_type = rhs.getType();

	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void		Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;

	return;
}
