#ifndef SORT_FUNCTIONS_H
#define SORT_FUNCTIONS_H

#include <string>
#include <vector>

class Names {

public:

void getList();
void display() const;
void sortNames();
void searchSort();
void insertionSort();
int binarySearch(std::string) const;

private:

std::vector <std::string> nameList;

};

#endif