/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:00 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:08:46 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat") {
	this->brain = new Brain();
}

WrongCat::WrongCat(std::string type): WrongAnimal(type) {
	this->brain = new Brain();
}

WrongCat::WrongCat(WrongCat &rhs): WrongAnimal(rhs.getType()) {
	this->brain = &rhs.getBrain();
}

WrongCat::~WrongCat() {
	delete this->brain;
	std::cout << "Bye miaw miaw" << GREY << " Destructor" << RESET << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}

Brain	&WrongCat::getBrain() const {
	return *this->brain;
}

WrongCat	&WrongCat::operator=(WrongCat &rhs) {
	this->brain = &rhs.getBrain();
	return *this;
}