/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:45:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/23 11:39:04 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NBR 10

int main()
{
/* - test 1 - */
	// const Animal	*j = new Dog();
	// const Animal	*i = new Cat();

	// delete j;
	// delete i;

/* - test 2 - */
	const Animal	*animals[NBR];
	
	for	(size_t i = 0; i < NBR; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;
	for	(size_t i = 0; i < NBR; i++)
		animals[i]->makeSound();

	std::cout << std::endl;
	Dog 			*dog_ptr((Dog *)animals[0]);
	Cat 			*cat_ptr((Cat *)animals[1]);

	/* ----- C++98 ----- */
	dog_ptr->getDogBrain()->setIdea(2, "play");
	cat_ptr->getCatBrain()->setIdea(2, "sleep");
	dog_ptr->getDogBrain()->setIdea(45, "play");
	cat_ptr->getCatBrain()->setIdea(45, "sleep");

	std::cout << dog_ptr->getDogBrain()->getIdea(2) << std::endl;
	std::cout << cat_ptr->getCatBrain()->getIdea(2) << std::endl;
	std::cout << dog_ptr->getDogBrain()->getIdea(45) << std::endl;
	std::cout << cat_ptr->getCatBrain()->getIdea(45) << std::endl;

	std::cout << std::endl;
	for	(size_t i = 0; i < NBR; i++)
		delete animals[i];

	return (0);
}
