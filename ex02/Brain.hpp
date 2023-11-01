/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:46:10 by zhlim             #+#    #+#             */
/*   Updated: 2023/11/01 12:15:20 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class Brain {
	
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(std::string *ideas);
		Brain(Brain &rhs);
		~Brain();
		
		void				addIdea(int i, std::string idea);
		std::string			getIdea(int i) const;
		std::string const	*getIdeas() const;
		Brain				&operator=(Brain &rhs);
};