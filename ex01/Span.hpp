/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:33:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/04 16:10:47 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <stdexcept>


class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
public:
	//------------OCF-----------------//
	Span();									//Derault constructor
	Span(unsigned int n);					//Parameterized Constructor
	Span(const Span& src);					//Copy constructor
	Span& operator=(const Span& rhs);		//Copy assignment operator
	~Span();								//Destructor
	//------------Methods--------------//
	void addNumber(int number);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	
	//------------Getters??!!??--------------//
	// Trying to make Span class act like a container technically i expose the iterators
	std::vector<int>::iterator begin() { return _numbers.begin(); }
	std::vector<int>::iterator end() { return _numbers.end(); }
	
	std::vector<int>::const_iterator begin() const { return _numbers.begin(); }
	std::vector<int>::const_iterator end() const { return _numbers.end(); }

	template <typename Iterator>
	void addRange(Iterator begin, Iterator end);
};

# include "Span.tpp"

#endif // !SPAN_HPP
