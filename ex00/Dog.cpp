/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:03:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/20 18:58:07 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "It's a dog!" << std::endl;

	return;
}

Dog::Dog(const Dog &src)
{
	*this = src;

	return;
}

Dog::~Dog()
{
	std::cout << "The dog disappeared" << std::endl;

	return;
}

Dog		&Dog::operator=(const Dog &rhs)
{
	//if (this != &rhs)
		_type = rhs.getType();

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;

	return;
}
