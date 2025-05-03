/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:53:16 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/03 16:09:04 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& src) : _maxSize(src._maxSize), _numbers(src._numbers) {}
// Span::Span(const Span& src) = default; 
// Span::Span(const Span& src)
// {
	// *this = src;
// }

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