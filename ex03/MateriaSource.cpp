/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:07 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 13:13:39 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): i(0) {
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	std::cout << "New materia source found" << GREY " Constructor" RESET << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &rhs): i(rhs.getI()) {
	for (int i = 0; i < 4; i++) {
		if (rhs.getSlots(i))
			this->slots[i] = rhs.getSlots(i)->clone();
	}
	std::cout << "New materia source found" << GREY " Constructor" RESET << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i])
			delete this->slots[i];
	}
	std::cout << "Materia source has shut down" << GREY " Destructor" RESET << std::endl;
}

AMateria		*MateriaSource::getSlots(int i) const {
	return this->slots[i];
}

AMateria *const	*MateriaSource::getSlots() const {
	return this->slots;
}

int				MateriaSource::getI() const {
	return this->i;
}

void			MateriaSource::learnMateria(AMateria* m) {
	if (this->i == 4)
		this->i = 0;
	this->slots[this->i] = m;
	std::cout << "Learnt new Materia " << this->slots[i]->getType() << " at slot " << this->i << std::endl;
	this->i++;
}

AMateria		*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] && this->slots[i]->getType() == type) {
			return this->slots[i]->clone();
		}	
	}
	return 0;
}

MateriaSource		&MateriaSource::operator=(MateriaSource &rhs) {
	this->i = rhs.getI();
	for (int i = 0; i < 4; i++) {
		if (rhs.getSlots(i))
			this->slots[i] = rhs.getSlots(i)->clone();
	}
	return *this;
}