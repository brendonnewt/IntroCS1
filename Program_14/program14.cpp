/*
  Author: Brendon Newton
  Assignment Title: Program 14
  Assignment Description: Read n integers into an array and display it in 
                          reverse order. 
  Due Date: 9/30/2022
  Date Created: 12/19/2022
  Date Last Modified: 12/23/2022
*/

/*
  Data Abstraction: iostream and string libraries included

  Input: Prompts user for a number of integers
         Creates array for n integers
         Asks user to input n numbers, which are then stored
         in the array

  Process: Creates reverse array and stores reverse values of the
           original array
           Calculates sum of array elements
           Copies array into a sorting array that sorts the
           elements in numerical order
           Calculates number of duplicates
           Calculates max and min

  Output: Outputs the elements of the array to screen
          Outputs elements reversed to screen
          Outputs sum
          Outputs duplicates
          Outputs max and min

  Assumptions: User will input only integers
               User will input numbers within signed int range
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  
  //Data Abstraction

  int numElements, currInt, tempVal;
  int i = 0;
  int j = 0;
  int numDupes = 0;
  bool first = true;
  int k;

  //Input

  cout << "Input the number of elements to store in the array: ";
  cin >> numElements;
  cout << numElements << endl;

  cout << "Input " << numElements << " integers:" << endl;

  int array[numElements];

  //Stores ints in array and echo prints input
  for (i = 0; i < numElements; i++) {
    cin >> currInt;
    cout << "integer - " << i << " : " << currInt << endl;
    array[i] = currInt;
  }

  //Process

  int reverseArray[numElements];

  //Stores reverse order into reverseArray
  for (i = numElements - 1; i >= 0; i--) {
    reverseArray[numElements - 1 - i] = array[i];
  }

  int sum = array[0];

  //Calculates sum
  for (i = 1; i < numElements; i++) {
    sum += array[i];
  }

  //Copies array into arraySort
  int arraySort[numElements];
  for (i = 0; i < numElements; i++) {
    arraySort[i] = array[i];
  }

  //Sorts arraySort in increasing order
  for (i = 0; i < numElements; i++) {
    for (j = 0; j < numElements; j++) {
      if (arraySort[j] > arraySort[i]) {
        tempVal = arraySort[j];
        arraySort[j] = arraySort[i];
        arraySort[i] = tempVal;
      }
    }
  }

  //Calculates numDupes by comparing increasing values
  for (i = 0; i < numElements - 1; i++) {
    if (arraySort[i] == arraySort[i + 1] && !first) {
      if (arraySort[i] != k) {
        numDupes++;
        k = arraySort[i];
      }
    }
    else if ((arraySort[i] == arraySort[i + 1]) && first) {
      numDupes++;
      k = arraySort[i];
      first = false;
    }
  }

  int max = array[0];
  int min = array[0];

  //Stores max and min
  for (i = 0; i < numElements; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }

  //Output

  cout << endl << "The values stored into the array are :" << endl;
  for (i = 0; i < numElements; i++) {
    cout << array[i] << " ";
  }
  cout << endl << endl;

  cout << "The values stored into the array in reverse are :" << endl;
  for (i = 0; i < numElements; i++) {
    cout << reverseArray[i] << " ";
  }
  cout << endl << endl;

  cout << "The sum of all elements of the array is " << sum << endl;
  cout << "The total number of duplicate elements in the array is "
       << numDupes << endl;
  cout << "The maximum and minimum element in the array are "
       << max << " , " << min << endl;

  return 0;
}