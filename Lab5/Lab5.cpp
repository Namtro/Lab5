// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

char translateChar(const std::vector<char>& cipher, char c) {
	if (c >= 'A' && c <= 'Z') {
		return cipher[c - 'A'];
	}
	else if (c >= 'a' && c <= 'z') {
		return cipher[c - 'a'] + 32;
	}
	else {
		return c;
	}
}

int main() {

	std::vector<char> cipher = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

	std::string text;

	std::cout << "Input text to cypher: ";
	std::getline(std::cin, text);

	for (char& c : text) {
		c = translateChar(cipher, c);
	}

	std::cout << "Encoded Message: " << text << std::endl;

	return 0;
}


	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
