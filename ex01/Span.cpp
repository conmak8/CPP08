/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:53:16 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/04 13:37:41 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _maxSize(0) {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& src) : _maxSize(src._maxSize), _numbers(src._numbers) {}
// Span::Span(const Span& src) = default;

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_maxSize = rhs._maxSize;
		_numbers = rhs._numbers;
	}
	return *this;
}
// Span& Span::operator=(const Span& rhs) = default;

Span::~Span() {}
// Span::~Span() = default;

void Span::addNumber(int number)
{
	if(_numbers.size() >= _maxSize)
		throw std::out_of_range("Span is full"); // ? what if runtime_error?
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to compute a span");

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	// unsigned int minSpan = static_cast<unsigned int>(-1); //trick to get max
	// unsigned int minSpan = UINT_MAX;
	// unsigned int minSpan = std::numeric_limits<unsigned int>::max(); // or use this
	unsigned int minSpan = static_cast<unsigned int>(sorted[1] - sorted[0]); // initialize with first span
	for (size_t i = 2; i < sorted.size(); ++i)
	{
		unsigned int span = static_cast<unsigned int>(sorted[i] - sorted[i - 1]);
		if (span < minSpan)
			minSpan = span;
	}
	
	return minSpan;
}

unsigned int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw  std::logic_error("Not enough numbers to compute a span");
		
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());

	return static_cast<unsigned int>(max - min);
}
