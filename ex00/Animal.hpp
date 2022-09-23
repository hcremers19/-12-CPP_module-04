/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:46:13 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/23 11:04:06 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &src);
		virtual ~Animal();

		Animal			&operator=(const Animal &rhs);

		std::string		getType() const;

		virtual void	makeSound() const;

	protected:
		std::string 	_type;
};

#endif