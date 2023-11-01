/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:57:22 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:32:15 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Ice: public AMateria {

	public:
		Ice();
		Ice(Ice &rhs);
		~Ice();

		AMateria*	clone() const;
		void 		use(ICharacter &target);
		Ice			&operator=(Ice &rhs);
};