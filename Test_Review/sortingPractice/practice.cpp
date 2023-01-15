#include "sortFunctions.h"
#include <iostream>
#include <string>

int main() {

	Names namesToSort;

	namesToSort.getList();

	//namesToSort.sortNames();
	//namesToSort.searchSort();
	namesToSort.insertionSort();
	
	std::string searchName;
	std::cout << "Enter name to search for: ";
	std::getline(std::cin, searchName);
	std::cout << searchName << std::endl;
	std::cout << "Found at index: " << namesToSort.binarySearch(searchName) << std::endl;
	namesToSort.display();

	return 0;
}