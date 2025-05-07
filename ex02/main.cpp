/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:04:21 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/07 15:46:21 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <stack>


void separator() {
	std::cout << "\033[36m-----------------------------\033[0m\n" << std::endl;
}

void pressEnter() {
	std::cout << "\033[33mPress ENTER to continue...\033[0m" << std::endl;
	std::cin.get();
}

void cppSampeTest() {
	std::cout << "\033[35m💻 C++ Sample Test\033[0m" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	pressEnter();
}

// Test with int
void testIntegers() {
	separator();
	std::cout << "🔢 MutantStack<int> Test\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << "\n";
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << "\n";

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Contents:\n";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";

	std::stack<int> copy(mstack);
	std::cout << "Copied stack top: " << copy.top() << "\n";
	pressEnter();
}

// Test with char
void testCharacters() {
	separator();
	std::cout << "🔡 MutantStack<char> Test\n";
	MutantStack<char> mstack;
	std::string input = "hello!";
	for (char c : input)
		mstack.push(c);

	std::cout << "Contents:\n";
	for (MutantStack<char>::const_iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
	pressEnter();
}

// Test with std::string
void testStrings() {
	separator();
	std::cout << "🧵 MutantStack<std::string> Test\n";
	MutantStack<std::string> mstack;
	mstack.push("first");
	mstack.push("second");
	mstack.push("third");

	for (MutantStack<std::string>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
	pressEnter();
}

void chooseContainerType() {
	separator();
	std::cout << "📦 Choose underlyint container type\n";
	MutantStack<int, std::vector<int>> vecStack;
	vecStack.push(10);
	vecStack.push(20);

	for (auto it = vecStack.begin(); it != vecStack.end(); ++it)
		std::cout << *it << std::endl;
	pressEnter();
}

int main() {
	cppSampeTest();
	std::cout << "\nMy Tests:\n";
	testIntegers();
	testCharacters();
	testStrings();
	chooseContainerType();
	return 0;
}
