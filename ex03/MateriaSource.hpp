/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:46 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 13:10:06 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	
	private:
		AMateria	*slots[4];
		int			i;

	public:
		MateriaSource();
		MateriaSource(MateriaSource &rhs);
		~MateriaSource();
		
		AMateria		*getSlots(int i) const;
		AMateria *const	*getSlots() const;
		int				getI() const;
		void			learnMateria(AMateria*);
		AMateria		*createMateria(std::string const & type);
		MateriaSource	&operator=(MateriaSource &rhs);
};