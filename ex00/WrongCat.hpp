/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:14:05 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:37:33 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

// public derive makes Animal members accessible
class WrongCat: public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat &rhs);
		~WrongCat();

		void	makeSound() const;
};