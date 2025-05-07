/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:34:07 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/07 15:43:50 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <typename T,typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {								// Default constructor
	std::cout << "MutantStack default constructor called ✅" << std::endl;
}

template <typename T,typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& src) : std::stack<T, Container>(src) { 	// Copy constructor
	std::cout << "MutantStack copy constructor called 🔄" << std::endl;
}

template <typename T,typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& rhs) 			// Copy assignment operator
{
	if (this != &rhs)
		std::stack<T, Container>::operator=(rhs);
	std::cout << "MutantStack assignment operator called 📝" << std::endl;
	return *this;
}

template <typename T,typename Container>
MutantStack<T, Container>::~MutantStack() { 												// Destructor
	std::cout << "MutantStack destructor called 💥" << std::endl;
}



template <typename T,typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() 
{
	return std::stack<T, Container>::c.begin(); 											// Access to the beginning of the stack
}

template <typename T,typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const 
{
	return std::stack<T, Container>::c.begin(); 											// Access to the beginning of the stack
}

template <typename T,typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() 
{
	return std::stack<T, Container>::c.end(); 												// Access to the end of the stack
}

template <typename T,typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const 
{
	return std::stack<T, Container>::c.end(); 												// Access to the end of the stack
}
