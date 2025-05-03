/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:54:44 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/03 14:41:04 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>  // std::find
#include <stdexcept>  // runtime_error


template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp"

#endif // !EASYFIND_HPP
