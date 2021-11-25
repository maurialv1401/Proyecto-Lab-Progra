// Proyecto Final
// PROG2 | 2021 - 2.

#ifndef PROG2_TABLERO_H
#define PROG2_TABLERO_H

#include <iostream>
#include <iomanip>


using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

template<class T>
class Board {
private:
    T **board;
    const unsigned short int SIZE = 10;
    const char WATER = '~';
    const char AIRCRAFT_CARRIER = 'A';
    const char BATTLECRUISER = 'B';
    const char SUBMARINE = 'S';
    const char TORPEDO_BOAT = 'T';
    const char HIT = 'Y';
    const char MISS = '.';
    const char DESTROYED = 'X';

    void initialize() {
        board = new T *[SIZE];
        for (int i = 0; i < SIZE; i++)
            board[i] = new T[SIZE];
    }

    void emptyCharBoard() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                board[i][j] = WATER;
            }
        }
    }

public:
    Board() {
        initialize();
        emptyCharBoard();
    }
    int getSize() const { return SIZE; }

    T getItem(int r, int c) const {
        if (r < 0 || r >= SIZE || c < 0 || c >= SIZE)
            throw "Index out of bounds";
        return board[r][c];
    }

    void setItem(int r, int c, T value) {
        if (r < 0 || r >= SIZE || c < 0 || c >= SIZE)
            throw "Index out of bounds";
        board[r][c] = value;
    }

    void show() const {
        cout << "  ";
        for (int i = 0; i < 10; ++i) {
            cout << setw(2) <<char('A' + i);
        }
        cout << endl;
        for (int i = 0; i < SIZE; i++) {
            cout <<setw(2) <<std::right<<i+1<< " ";
            for (int j = 0; j < SIZE; j++) {
                cout << setw(2) << std::left <<board[i][j];
            }
            cout << endl;
        }
    }

    ~Board() {
        for (int i = 0; i < SIZE; i++)
            delete[] board[i];
        delete[] board;
        board = nullptr;
    }
};


#endif//PROG2_TABLERO_H
