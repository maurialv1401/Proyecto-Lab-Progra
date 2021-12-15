//
// Created by leona on 14 dic. 2021.
//

#include "game.h"


void game::run() {

    io->initializeGame();

    // Mandar primer _player.in
    // leer primer _player.out
    // guardar tokem
    // Mandar en el mismo archivo todas las posiciones definidas por un template aleatorio
    // El segundo .out avisa que esta lleno
    // mandar primer ataque definido por el algoritmo
    //


}

game::game() {
    io = new IOcommand(target_directory, p);
    player_board = new Board<char>();
    enemy_board = new Board<char>();
    p = new player(player_board);
}

game::~game() {
delete p;
delete io;
delete player_board;
delete enemy_board;
}
