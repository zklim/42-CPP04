/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:32:30 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:31:02 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal(): type("Undefined") {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

AWrongAnimal::AWrongAnimal(AWrongAnimal &rhs): type(rhs.getType()) {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

AWrongAnimal::AWrongAnimal(std::string type): type(type) {
	std::cout << "Created an Animal of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

AWrongAnimal::~AWrongAnimal() {
	std::cout << "Destroyed an Animal of " << this->type << GREY << " Destructor" << RESET << std::endl;
}

std::string	AWrongAnimal::getType() const {
	return this->type;
}

AWrongAnimal	&AWrongAnimal::operator=(AWrongAnimal &rhs) {
	this->type = rhs.getType();
	return *this;
}