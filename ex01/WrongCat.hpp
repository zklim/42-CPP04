/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:14:05 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:07:50 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"
# include "Brain.hpp"

// public derive makes Animal members accessible
class WrongCat: public WrongAnimal {
	
	private:
		Brain	*brain;

	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat &rhs);
		~WrongCat();

		void		makeSound() const;
		Brain		&getBrain() const;
		WrongCat	&operator=(WrongCat &rhs);
};