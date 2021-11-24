//
// Created by leona on 23 nov. 2021.
//


#include "tablero.h"
#include "fstream"
#include "iostream"

using namespace std;

int main () {
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
}
