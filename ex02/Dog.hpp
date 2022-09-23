/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat copy.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:04:28 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/22 11:38:05 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		virtual ~Dog();

		Dog				&operator=(const Dog &rhs);

		Brain			*getDogBrain() const;
		std::string		getIdea(int index) const;

		virtual void	makeSound() const;

	private:
		Brain			*_dogBrain;
};

#endif