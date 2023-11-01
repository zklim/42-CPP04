/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:14:05 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:34:52 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

// public derive makes Animal members accessible
class Cat: public Animal {
	
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat &rhs);
		~Cat();

		void	makeSound() const;
};