/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:14:07 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:35:57 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

// public derive makes Animal members accessible
class Dog: public Animal {
	
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog &rhs);
		~Dog();
		
		void	makeSound() const;
};