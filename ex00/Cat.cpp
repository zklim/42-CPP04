/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:00 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:43:25 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {}

Cat::Cat(std::string type): Animal(type) {}

Cat::Cat(Cat &rhs): Animal(rhs.getType()) {}

Cat::~Cat() {
	std::cout << "Bye miaw miaw" << GREY << " Destructor" << RESET << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}