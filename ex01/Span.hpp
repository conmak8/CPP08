/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:33:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/03 15:53:00 by cmakario         ###   ########.fr       */
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
	
	// void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	// or
	// template <typename T>
	// void addRange(Iterator begin, Iterator end);

};

#endif // !SPAN_HPP
