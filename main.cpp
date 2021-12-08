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





#include "board.h"
#include "player.h"
#include "iocommand.h"





/* Algoritmo y comandos
 *
 * ATTACK=C1
 * Comandos siempre recibe un vector de forma <(0,3)>
 * ATTACK=H3-DAMAGED
 * Comandos siempre retorna un vector de forma < 1,(7,2)>
 *
 *
 * Leyenda de status:
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
    player player_test;
    filesystem::path target_directory = "/mnt/c/Users/leona/OneDrive/UTEC/2021-2/PROG2/Proyecto-Lab-Progra/io";

    auto *io_test = new IOcommand(target_directory, player_test);

    bool a = io_test->initializeGame();


    std::cout << "finallll: " << a;

    // Mandar primer _player.in
    // leer primer _player.out
    // guardar toker
    // Mandar en el mismo archivo todas las posiciones definidas por un template aleatorio
    // El segundo .out avisa que esta lleno
    // mandar primer ataque definido por el algoritmo
    //


    delete io_test;
}

