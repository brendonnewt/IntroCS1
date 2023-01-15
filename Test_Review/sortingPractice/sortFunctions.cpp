/*
Author: Brendon Newton
Program Name: Sorting Practice
Program Description: Contains the function definitions for the
					 sort functions header file
Due Date: NA
Date Created: 1/10/2023
Date Last Modified: 1/10/2023
*/

#include "sortFunctions.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void Names::getList() {
	std::cout << "Enter file name: ";
	std::string fileName;
	std::cin >> fileName;
	std::cout << fileName << std::endl;

	std::ifstream inFS;

	inFS.open(fileName);

	if (!inFS.is_open()) {
		std::cout << "Error: File not opened" << std::endl;
		inFS.close();
	}

	std::string currName;

	while (getline(inFS, currName)) {
		nameList.push_back(currName);
	}

	std::cin.ignore();
}

void Names::sortNames() {
	sort(nameList.begin(), nameList.end());
}

void Names::searchSort() {
	int smallestIndex;
	std::string temp;
	unsigned int i = 0;
	unsigned int j = 0;
	for (i = 0; i < nameList.size() - 1; i++) {
		smallestIndex = i;
		for (j = i + 1; j < nameList.size(); j++) {
			if (nameList[j] < nameList[smallestIndex]) {
				smallestIndex = j;
			}
		}
		temp = nameList[i];
		nameList[i] = nameList[smallestIndex];
		nameList[smallestIndex] = temp;
	}
}

void Names::insertionSort() {
	std::string temp;
	unsigned int j;
	for (unsigned int i = 1; i < nameList.size(); i++) {
		j = i;
		while (j > 0 && nameList[j] < nameList[j - 1]) {
			temp = nameList[j];
			nameList[j] = nameList[j - 1];
			nameList[j - 1] = temp;
			j--;
		}
	}
}

int Names::binarySearch(std::string key) const {
	int low, high, mid;

	low = 0;
	high = nameList.size() - 1;

	while (high >= low) {
		mid = (high + low) / 2;
		if (nameList[mid] < key) {
			low = mid + 1;
		}
		else if (nameList[mid] > key) {
			high = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

void Names::display() const {
	for (size_t i = 0; i < nameList.size(); i++) {
		if (i == nameList.size() - 1 || nameList[i] != nameList[i + 1]) {
			std::cout << nameList[i] << std::endl;
		}
	}
}