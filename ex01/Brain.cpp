/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:18:44 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/22 11:22:10 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "The animal developped a brain" << std::endl;

	return;
}

Brain::Brain(const Brain &src)
{
	for (size_t i = 0; i < 99; i++)	
		_ideas[i] = src.getIdea(i);

	return;
}

Brain::~Brain()
{
	std::cout << "The animal lost its brain" << std::endl;

	return;
}

Brain		&Brain::operator=(const Brain &rhs)
{
	for (size_t i = 0; i < 99; i++)
		_ideas[i] = rhs.getIdea(i);

	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (_ideas[index]);
}

void		Brain::setIdea(int index, std::string idea)
{
	_ideas[index] = idea;

	return;
}