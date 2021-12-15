//
// Created by leona on 14 dic. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_GAME_H
#define PROYECTO_LAB_PROGRA_GAME_H

#include "board.h"
#include "player.h"
#include "iocommand.h"


class game {
private:
    player *p;
    filesystem::path target_directory = "/mnt/c/Users/leona/OneDrive/UTEC/2021-2/PROG2/Proyecto-Lab-Progra/io";
    IOcommand *io;
    Board<char> *player_board;
    Board<char> *enemy_board;
public:
    game();

    virtual ~game();

    void run();
};


#endif //PROYECTO_LAB_PROGRA_GAME_H
