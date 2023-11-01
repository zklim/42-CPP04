/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:30:40 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:30:06 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class AWrongAnimal {
	
	protected:
		std::string	type;

	public:
		AWrongAnimal();
		AWrongAnimal(std::string type);
		AWrongAnimal(AWrongAnimal &rhs);
		virtual ~AWrongAnimal();

		std::string 	getType() const;
		virtual void	makeSound() const = 0;
		AWrongAnimal	&operator=(AWrongAnimal &rhs);
};