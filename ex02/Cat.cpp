/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:03:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/22 11:49:13 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";

	std::cout << "It's a cat!" << std::endl;

	_catBrain = new Brain();

	/* ----- C++11 ----- */
	// for (size_t i = 0; i < 99; i++)
	// 	_catBrain->setIdea(i, "Idea " + std::to_string(i) + ": sleep");

	return;
}

Cat::Cat(const Cat &src)
{
	*this = src;

	_catBrain = new Brain(*(src.getCatBrain()));

	return;
}

Cat::~Cat()
{
	std::cout << "The cat disappeared" << std::endl;

	delete _catBrain;

	return;
}

Cat			&Cat::operator=(const Cat &rhs)
{
	_type = rhs.getType();
	_catBrain = new Brain(*rhs.getCatBrain());

	return (*this);
}

Brain		*Cat::getCatBrain() const		{return (_catBrain);}
std::string	Cat::getIdea(int index) const	{return (getCatBrain()->getIdea(index));}

void		Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;

	return;
}
