/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:03:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/20 18:10:30 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "It's a cat!" << std::endl;

	return;
}

Cat::Cat(const Cat &src)
{
	*this = src;

	return;
}

Cat::~Cat()
{
	std::cout << "The cat disappeared" << std::endl;

	return;
}

Cat		&Cat::operator=(const Cat &rhs)
{
	//if (this != &rhs)
		_type = rhs.getType();

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;

	return;
}
