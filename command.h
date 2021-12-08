//
// Created by leona on 7 dic. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_COMMAND_H
#define PROYECTO_LAB_PROGRA_COMMAND_H
#include <utility>
struct command {
    int id;
    std::pair<char, int> position;

    command(int id, int x, int y) : id(id), position(x,y) {}
};


#endif //PROYECTO_LAB_PROGRA_COMMAND_H
