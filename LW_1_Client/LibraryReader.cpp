#include "pch.h"
#include "LibraryReader.h"
#include <iostream>

bool skipLine() {
	char c;
	bool isClear = true;
	do {
		std::cin.get(c);
		if (!iswspace(c)) {
			isClear = false;
		}
	} while (c != '\n');
	return isClear;
}

bool readDouble(double& target) {
	std::cin >> target;
	if (!std::cin) {
		std::cin.clear();
		skipLine();
		return false;
	}
	if (!iswspace(std::cin.peek())) {
		skipLine();
		return false;
	}
	return true;
}

bool readDoubleInt(double& target) {
	std::cin >> target;
	if (!std::cin) {
		std::cin.clear();
		skipLine();
		return false;
	}
	if (!iswspace(std::cin.peek())) {
		skipLine();
		return false;
	}
	if ((target - (int)target) != 0)
	{
		std::cin.clear();
		skipLine();
		return false;
	}
	return true;
}

bool readInt(int& target) {
	std::cin >> target;
	if (!std::cin) {
		std::cin.clear();
		skipLine();
		return false;
	}
	if (!iswspace(std::cin.peek())) {
		skipLine();
		return false;
	}
	return true;
}

bool readLineInt(int& target) {
	if (readInt(target)) {
		return skipLine();
	}
	return false;
}

bool readLineDouble(double& target) {
	if (readDouble(target)) {
		return skipLine();
	}
	return false;
}
