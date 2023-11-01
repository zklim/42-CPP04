/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:42:37 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:22:41 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog") {
	this->brain = new Brain();
}

Dog::Dog(std::string type): AAnimal(type) {
	this->brain = new Brain();
}

Dog::Dog(Dog &rhs): AAnimal(rhs.getType()) {
	this->brain = new Brain(rhs.getBrain());
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Kill the dawg!" << GREY << " Destructor" << RESET << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}

Brain	&Dog::getBrain() const {
	return *this->brain;
}

Dog		&Dog::operator=(Dog &rhs) {
	if (this != &rhs) {
		delete this->brain;
		this->brain = new Brain(rhs.getBrain());
		AAnimal::operator=(rhs);
	}
	return *this;
}