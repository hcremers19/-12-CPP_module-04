/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:03:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/05 15:30:14 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "It's a wrong cat!" << std::endl;

	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;

	return;
}

WrongCat::~WrongCat()
{
	std::cout << "The wrong cat disappeared" << std::endl;

	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	//if (this != &rhs)
		_type = rhs.getType();

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meow" << std::endl;

	return;
}
