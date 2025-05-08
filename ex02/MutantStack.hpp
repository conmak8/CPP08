/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:39:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/08 13:41:03 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>
# include <iterator>
# include <algorithm>


template <typename T,typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
// protected:
// 	using std::stack<T, Container>::c; // Access to the container of the stack
public:	
	//------------OCF-----------------//
	MutantStack();										// Default constructor
	MutantStack(const MutantStack& src);				// Copy constructor
	MutantStack& operator=(const MutantStack& rhs);		// Copy assignment operator
	~MutantStack();										// Destructor
	//------------Methods--------------//
	//___Iterators Access__//
	// typedef typename std::stack<T>::container_type::iterator iterator;
	// using iterator = typename std::stack<T>::container_type::iterator;
	using iterator = typename Container::iterator;
	// typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	// using const_iterator = typename std::stack<T>::container_type::const_iterator;
	using const_iterator = typename Container::const_iterator;

	iterator begin();
	const_iterator begin() const;
	iterator end();
	const_iterator end() const;
	// iterator begin() { return std::stack<T>::c.begin(); }
	// const_iterator begin() const { return std::stack<T>::c.begin(); }
	// iterator end() { return std::stack<T>::c.end(); }
	// const_iterator end() const { return std::stack<T>::c.end(); }
	
};

#include "MutantStack.tpp"

#endif // !MUTANTSTACK_HPP