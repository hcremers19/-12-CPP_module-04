/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:04:28 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/22 11:33:42 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		virtual ~Cat();

		Cat				&operator=(const Cat &rhs);

		Brain			*getCatBrain() const;
		std::string		getIdea(int index) const;

		virtual void	makeSound() const;

	private:
		Brain			*_catBrain;
};

#endif