/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:00 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:46:19 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat") {}

WrongCat::WrongCat(std::string type): WrongAnimal(type) {}

WrongCat::WrongCat(WrongCat &rhs): WrongAnimal(rhs.getType()) {}

WrongCat::~WrongCat() {
	std::cout << "Bye miaw miaw" << GREY << " Destructor" << RESET << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}