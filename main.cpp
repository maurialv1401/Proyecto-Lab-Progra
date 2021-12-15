// Proyecto Final
// PROG2 | 2021 - 2.

//TODO:
//  - Adaptar board.h a usar templates <-- Listo
//  - Función que lea y escriba comandos (usando el sintaxis del profe)
//  - Metodo para posicionar los barcos
//  - Crear clase p.h
//  - Funcion para atacar al azaar
//  - Funcion para guardar coordenadas de ataques realizados
//  - Terminar clase iocommand.h <-- Leonardo
//  - Crear clase file.h (parte de iocommand <-- Leonardo)









#include "game.h"

/* Algoritmo y comandos
 *
 * ATTACK=C1
 * Comandos siempre recibe un vector de forma <(0,3)>
 * ATTACK=H3-DAMAGED
 * Comandos siempre retorna un vector de forma < 1,(7,2)>
 *
 *
 * Leyenda de status:
 * First read (almacenar token) : -1
 * Failed: 0
 * Damaged: 1
 * Destroyed: 2
 * Game Over: 3
 *
 * Funcionamiento IOcommand:
 *
 *
 *
 *
 * */


using namespace std;


int main() {
    auto *game = new class game();
    game->run();
    delete game;
}

