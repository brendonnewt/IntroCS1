/*
  Author: Brendon Newton
  Assignment Title: Program 17
  Assignment Description: This program defines functions
                          for array processing
  Due Date: 11/04/2022
  Date Created: 12/25/2022
  Date Last Modified: 12/25/2022
*/

#include "arrayCount.h"

using namespace std;

int arrayCount(int a[], int s, int v) {
    int freq = 0;
    
    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(double a[], int s, double v) {
    int freq = 0;

    for (int i = 0; i < s; i++) {
        if (abs(a[i] - v) < 0.00001) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(string a[], int s, string v) {
    int freq = 0;

    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(char a[], char v) {
    int freq = 0;
    int s = 0;

    //Sets s to array size
    while(a[s]) {
        s++;
    }

    for (int i = 0; i < s; i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<int> a, int v) {
    int freq = 0;

    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<string> a, string v) {
    int freq = 0;

    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<double> a, double v) {
    int freq = 0;

    for (unsigned int i = 0; i < a.size(); i++) {
        if (abs(a[i] - v) < 0.00001) {
            freq++;
        }
    }
    return freq;
}

int arrayCount(vector<char> a, char v) {
    int freq = 0;

    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            freq++;
        }
    }
    return freq;
}

int matrixCount(int m[ ][MAX_SIZE], int r, int c, int v) {
    int freq = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] == v) {
                freq++;
            }
        }
    }
    return freq;
}

int matrixCount(char m[ ][MAX_SIZE], int r, int c, char v) {
    int freq = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] == v) {
                freq++;
            }
        }
    }
    return freq;
}

int matrixCount(string m[ ][MAX_SIZE], int r, int c, string v) {
    int freq = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] == v) {
                freq++;
            }
        }
    }
    return freq;
}
