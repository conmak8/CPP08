/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:09:20 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/03 14:37:53 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"


void separator()
{
	std::cout << "\033[36m-----------------------------\033[0m\n" << std::endl;
}

void pressEnter()
{
	std::cout << "\033[33mPress ENTER to continue...\033[0m" << std::endl;
	std::cin.get();
}

void testVector()
{
	std::vector<int> v = {10, 20, 30, 42, 50};
	try
	{
		std::vector<int>::iterator it = easyfind(v, 42);
		std::cout << "✅ Found in vector: " << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << "❌ Exception: " << e.what() << "\n";
	}
}

void testList()
{
	std::list<int> l = {1, 2, 3, 4};
	try
	{
		std::list<int>::iterator it = easyfind(l, 3);
		std::cout << "✅ Found in list: " << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << "❌ Exception: " << e.what() << "\n";
	}
}

void testNotFound()
{
	std::vector<int> v = {1, 2, 3, 4};
	try
	{
		std::vector<int>::iterator it = easyfind(v, 42);
		std::cout << "✅ Found in vector: " << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << "❌ Exception: " << e.what() << "\n";
	}
}

int main()
{
	void (*tests[])() = {testVector, testList, testNotFound};
	const char* testNames[] = {"Test Vector", "Test List" , "Test Not Found"};

	for (int i = 0; i < 3; ++i)
	{
		separator();
		std::cout << "🔍 " << testNames[i] << "\n\n";
		tests[i]();
		separator();
		pressEnter();
	}
}

// simple version

// int main()
// {
// 	try {
// 		std::cout << "🧪 Testing std::vector<int>...\n";
// 		std::vector<int> vec = {1, 2, 3, 42, 99};
// 		std::vector<int>::iterator vit = easyfind(vec, 42);
// 		std::cout << "Found in vector: " << *vit << "\n";
// 		pressEnter();

// 		separator();
// 		std::cout << "🧪 Testing std::list<int>...\n";
// 		std::list<int> lst = {10, 20, 30, 40};
// 		std::list<int>::iterator lit = easyfind(lst, 30);
// 		std::cout << "Found in list: " << *lit << "\n";
// 		pressEnter();

// 		separator();
// 		std::cout << "💥 Trying to find something that doesn't exist...\n";
// 		easyfind(vec, 1337);
// 	}
// 	catch (const std::exception& e)
// 	{
// 		std::cerr << "❌ Exception: " << e.what() << "\n";
// 	}
	
// 	return (0);
// }
