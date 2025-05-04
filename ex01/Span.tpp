/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:36:06 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/04 14:39:13 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end) {
	if (_numbers.size() + std::distance(begin, end) > _maxSize)
		throw std::overflow_error("Adding this range would exceed the span capacity!");
	_numbers.insert(_numbers.end(), begin, end);
}
