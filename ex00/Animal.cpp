/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:36:29 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 11:45:35 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Undefined") {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

Animal::Animal(Animal &rhs): type(rhs.getType()) {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

Animal::Animal(std::string type): type(type) {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

Animal::~Animal() {
	std::cout << "Destroyed an Animal of " << this->type << GREY << " Destructor" << RESET << std::endl;
}

void	Animal::makeSound() const {
	std::cout << this->type << " couldn't make any sound" << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}