/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:34:07 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/05 13:39:31 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {								// Default constructor
	std::cout << "MutantStack default constructor called ✅" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& src) : std::stack<T>(src) { 	// Copy constructor
	std::cout << "MutantStack copy constructor called 🔄" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs) 			// Copy assignment operator
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	std::cout << "MutantStack assignment operator called 📝" << std::endl;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() { 												// Destructor
	std::cout << "MutantStack destructor called 💥" << std::endl;
}



template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return std::stack<T>::c.begin(); 											// Access to the beginning of the stack
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{
	return std::stack<T>::c.begin(); 											// Access to the beginning of the stack
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return std::stack<T>::c.end(); 												// Access to the end of the stack
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{
	return std::stack<T>::c.end(); 												// Access to the end of the stack
}