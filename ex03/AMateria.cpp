/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:51:34 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:39:29 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type) {
	std::cout << "Created a Materia of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

AMateria::AMateria(AMateria &rhs): type(rhs.getType()) {
	std::cout << "Created a Materia of " << this->type << GREY << " Constructor" << RESET << std::endl;
}

AMateria::~AMateria() {
	std::cout << "Destroyed a Materia of " << this->type << GREY << " Destructor" << RESET << std::endl;
}

std::string const	&AMateria::getType() const {
	return this->type;
}

void				AMateria::use(ICharacter& target) {
	std::cout << "use " << this->type << "on " << target.getName() << std::endl;
}

AMateria			&AMateria::operator=(AMateria &rhs) {
	this->type = rhs.getType();
	return *this;
}