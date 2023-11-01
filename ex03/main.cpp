/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:21:34 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 13:17:04 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	std::cout << "===============Test default===============" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;

	std::cout << "===============Test inventory===============" << std::endl;
	Character	*hero = new Character("hero");
	Character	*hero2 = new Character("hero2");
	AMateria	*floor;

	for (int i = 0; i < 4; i++) {
		hero->equip(new Ice());
	}
	hero->use(3, *hero);
	floor = hero->getSlot(3); // save pointer
	hero->unequip(3); // drop Materia
	hero->use(3, *hero); // test using empty
	hero->equip(new Cure()); // pick another Materia
	hero->use(3, *hero); // test with new Materia
	hero2->equip(floor); // another hero picking up
	hero2->use(0, *hero); // using the picked up Materia
	delete hero;
	delete hero2;
	std::cout << std::endl;

	std::cout << "===============Test deep copy===============" << std::endl;
	Character	*ori = new Character("ori");
	Character	*copy = new Character("copy");

	for (int i = 0; i < 4; i++) {
		ori->equip(new Cure());
	}
	std::cout << copy->getName() << std::endl;
	*copy = *ori;
	std::cout << copy->getName() << std::endl;
	copy->use(0, *ori); // Use copy's Materia
	floor = ori->getSlot(0); // Save Materia that is going to drop on floor
	ori->unequip(0); // Unequip
	ori->equip(new Ice()); // Equip Ice at empty slot;
	copy->use(0, *ori); // Reuse same Materia again
	ori->use(0, *ori); // Compared to ori Materia at same slot
	*copy = *ori; // Try deep copy again but with Materia slots now
	Character	*deep = new Character(*copy); // Testing deep copy constructor
	std::cout << "-----Delete-----" << std::endl;
	delete ori;
	delete copy;
	delete deep;
	delete floor;
	std::cout << std::endl;

	std::cout << "===============Test MateriaSource===============" << std::endl;
	MateriaSource	*src2 = new MateriaSource();
	for (int i = 0; i < 4; i++) {
		src2->learnMateria(new Ice());
	}
	AMateria	*floor2;
	AMateria	*floor3;
	floor2 = src2->getSlots(0); // Get to avoid memory leaks
	floor3 = src2->getSlots(1);
	src2->learnMateria(new Cure()); // Learning more than slots
	src2->learnMateria(new Cure()); // Learning more than slots
	AMateria *const	*slots = src2->getSlots();
	for (int i = 0; i < 4; i++) {
		std::cout << i << ": " << slots[i]->getType() << std::endl;
	}
	tmp = src2->createMateria("Fire");
	if (!tmp)
		std::cout << "No Fire to create: " << tmp << std::endl;
	delete src2;
	delete floor2;
	delete floor3;
	std::cout << std::endl;
	
	std::cout << "===============Test MateriaSource deep copy===============" << std::endl;
	MateriaSource	*ori_src = new MateriaSource();
	MateriaSource	*copy_src = new MateriaSource();
	AMateria		*floor4;

	for (int i = 0; i < 4; i++) {
		ori_src->learnMateria(new Cure());
	}
	*copy_src = *ori_src;
	std::cout << copy_src->getSlots(0)->getType() << GREY " copied" RESET << std::endl;
	std::cout << ori_src->getSlots(0)->getType() << GREY " original" RESET << std::endl;
	floor4 = ori_src->getSlots(0); // Hold to avoid memory leak
	ori_src->learnMateria(new Ice());
	std::cout << copy_src->getSlots(0)->getType() << GREY " copied" RESET << std::endl;
	std::cout << ori_src->getSlots(0)->getType() << GREY " original" RESET << std::endl;
	delete ori_src;
	delete copy_src;
	delete floor4;
	
	// system("leaks -q main");
	return 0;
}