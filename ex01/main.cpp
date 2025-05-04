/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:28:51 by cmakario          #+#    #+#             */
/*   Updated: 2025/05/04 14:52:22 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void separator() {
	std::cout << "\033[36m-----------------------------\033[0m\n" << std::endl;
}

void pressEnter() {
	std::cout << "\033[33mPress ENTER to continue...\033[0m" << std::endl;
	std::cin.get();
}

void testBasicSpan() {
	std::cout << "\033[4m🔍 Basic Span Test\033[0m\n";
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Numbers in Span: ";
	for (int i : sp)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	std::cout << "Shortest Span: " << sp.shortestSpan() << "\n";
	std::cout << "Longest Span : " << sp.longestSpan() << "\n";
}

void testTooFew() {
	std::cout << "\033[4m💣 Exception for not enough numbers\033[0m\n";
	Span sp(3);
	sp.addNumber(42);
	try {
		sp.shortestSpan();
	} catch (const std::exception& e) {
		std::cerr << "Caught: " << e.what() << "\n";
	}
	try {
		sp.longestSpan();
	} catch (const std::exception& e) {
		std::cerr << "Caught: " << e.what() << "\n";
	}
}


void testBigSpan() {
	std::cout << "\033[4m🚀 Big Span Test (10000 elements)\033[0m\n";
	Span bigSpan(10000);
	for (int i = 0; i < 10000; ++i)
		bigSpan.addNumber(i * 3);
	std::cout << "Shortest Span: " << bigSpan.shortestSpan() << "\n";
	std::cout << "Longest Span : " << bigSpan.longestSpan() << "\n";
}


void testOverfill() {
	std::cout << "\033[4m🚫 Overfill Test\033[0m\n";
	Span sp(2);
	sp.addNumber(1);
	sp.addNumber(2);
	try {
		sp.addNumber(3); // should throw
	} catch (const std::exception& e) {
		std::cerr << "Caught: " << e.what() << "\n";
	}
}

void testAddRange() {
	std::cout << "📥 Add Range Test\n";
	Span sp(6);
	std::vector<int> values = {5, 15, 25, 35};
	sp.addRange(values.begin(), values.end());
	sp.addNumber(1);
	sp.addNumber(50);

	std::cout << "Shortest Span: " << sp.shortestSpan() << "\n";
	std::cout << "Longest Span : " << sp.longestSpan() << "\n";
}


int main() {
	void (*tests[])() = {testBasicSpan, testTooFew, testBigSpan, testOverfill, testAddRange};
	// const char* names[] = {"Basic Span", "Too Few Elements", "Big Span", "Overfill", "Test add Range"};
	// std::array<std::string,5> names = {
	std::vector<std::string> names = {
		"Basic Span",
		"Too Few Elements",
		"Big Span",
		"Overfill",
		"Test add Range"
	};
	// for (int i = 0; i < (sizeof(tests) / sizeof(tests[0])); ++i) {
	for (size_t i = 0; i < names.size(); ++i) {
		separator();
		std::cout << "🧪 Running Test: " << names[i] << "\n\n";
		tests[i]();
		separator();
		pressEnter();
	}
	return 0;
}
