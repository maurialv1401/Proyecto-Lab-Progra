#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "funciones.h"

using namespace std;


vector<string> letters = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        result.push_back(item);
    }

    return result;
}

template<typename T>
pair<bool, int> findInVector(const vector<T> &vecOfElements, const T &element) {
    pair<bool, int> result;
    // Find given element in vector
    size_t it = find(vecOfElements.begin(), vecOfElements.end(), element);
    if (it != vecOfElements.end()) {
        result.second = distance(vecOfElements.begin(), it);
        result.first = true;
    } else {
        result.first = false;
        result.second = -1;
    }
    return result;
}


/*
Implementacion
std::pair<bool, int> result = findInVector<int>(vecOfNums, 45);
if (result.first)
  std::cout << "Element Found at index : " << result.second <<std::endl;
else
  std::cout << "Element Not Found" << std::endl;
*/
