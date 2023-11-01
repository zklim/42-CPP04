/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:05:03 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:28:34 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Cure: public AMateria {

	public:
		Cure();
		Cure(Cure &rhs);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter &target);
		Cure		&operator=(Cure &rhs);
};