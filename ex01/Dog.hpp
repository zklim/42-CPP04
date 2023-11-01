/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:14:07 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:51:54 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

// public derive makes Animal members accessible
class Dog: public Animal {

	private:
		Brain	*brain;
	
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog &rhs);
		~Dog();
		
		void	makeSound() const;
		Brain	&getBrain() const;
		Dog		&operator=(Dog &rhs);
};