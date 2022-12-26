/*
  Author: Brendon Newton
  Assignment Title: Program 15
  Assignment Description: This program reads in two row numbers
                          and two column numbers and then prints
                          a multiplication table of the values
                          between those numbers
  Due Date: 10/21/2022
  Date Created: 12/21/2022
  Date Last Modified: 12/24/2022
*/

/*
  Data Abstraction: IOstream, vector, and IOmanip
                    libraries included
                    Ints R1, R2, C1, C2 included to store
                    user input


  Input: Asks user for R1, R2, C1, and C2
         Echo prints R1, R2, C1, and C2

  Process: Creates vectors for Row numbers and Column 
           numbers
           Fills the values of each vector to span from
           the first number to the second

  Output: Prints the table

  Assumptions: It is assumed the user will input integers
               It is assumed there will be no number
               larger than three characters
               It is assumed the max table size is
               25 x 25
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void FillValues(int n1, int n2, vector<int>& vec);
void PrintTable(const vector<int> rows, const vector<int> cols);

int main() {
  int R1, R2, C1, C2;

  //Input

  cout << "Please Enter Four Integers R1 R2 C1 C2: ";
  cin >> R1 >> R2 >> C1 >> C2;
  cout << R1 << " " << R2 << " ";
  cout << C1 << " " << C2 << endl;

  //Process

  vector<int> rowVec;
  vector<int> colVec;
  
  //Fills arrays with values
  FillValues(R1, R2, rowVec);
  FillValues(C1, C2, colVec);

  //Output

  PrintTable(rowVec, colVec);

  return 0;
}

//Fills column and row array values in between n1 and n2
void FillValues(int n1, int n2, vector<int>& vec) {
  int i = 0;
  int j = 0;

  //Fills least to greatest
  if (n1 < n2) {
    for (i = n1; i <= n2; i++) {
      vec.push_back(i);
      j++;
    }
  }
  //Fills greatest to least
  else {
    for (i = n1; i >= n2; i--) {
      vec.push_back(i);
      j++;
    }
  }
}

void PrintTable(const vector<int> rows, const vector<int> cols) {
  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int k = 0;
  unsigned int stopPrint;

  //First Line
  cout << "   ";
  //Output loop for column number
  for(i = 0; i < cols.size(); i++) {
    cout << setw(6) << setfill(' ') << right;
    cout << cols[i];
  }
  cout << endl;

  //Prints first barrier line
  for (i = 0; i <= cols.size(); i++) {
    cout << "-----|";
  }
  cout << endl;

  //Sets loop number to bigger size
  if (cols.size() < rows.size()) {
    stopPrint = cols.size();
  }
  else if (rows.size() < cols.size()) {
    stopPrint = rows.size();
  }

  //OUTPUTS MULTIPLIED VALUES

  //Outputs column number
  for (i = 0; i < rows.size(); i++) {
    cout << setw(8) << setfill(' ') << left;
    cout << rows[i];
    //Outputs multiplied values
    for (j = 0; j < rows.size(); j++) {
      if (j < stopPrint) {
        int outputNum = cols[j] * rows[i];
        cout << setw(6) << setfill(' ') << left;
        cout << outputNum;
      }
    }
    cout << endl;
    //Outputs barrier line
    for (k = 0; k <= cols.size(); k++) {
      cout << "-----|";
    }
    cout << endl;
  }
}
