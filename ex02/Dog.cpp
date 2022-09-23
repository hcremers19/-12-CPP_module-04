/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:03:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/22 11:49:01 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";

	std::cout << "It's a Dog!" << std::endl;

	_dogBrain = new Brain();

	/* ----- C++11 ----- */
	// for (size_t i = 0; i < 99; i++)
	// 	_dogBrain->setIdea(i, "Idea " + std::to_string(i) + ": play");

	return;
}

Dog::Dog(const Dog &src)
{
	*this = src;

	_dogBrain = new Brain(*(src.getDogBrain()));

	return;
}

Dog::~Dog()
{
	std::cout << "The Dog disappeared" << std::endl;

	delete _dogBrain;

	return;
}

Dog			&Dog::operator=(const Dog &rhs)
{
	_type = rhs.getType();
	_dogBrain = new Brain(*rhs.getDogBrain());

	return (*this);
}

Brain		*Dog::getDogBrain() const		{return (_dogBrain);}
std::string	Dog::getIdea(int index) const	{return (getDogBrain()->getIdea(index));}

void		Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;

	return;
}
