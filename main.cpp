// Proyecto Final
// PROG2 | 2021 - 2.

//TODO:
//  - Adaptar board.h a usar templates <-- Listo
//  - Función que lea y escriba comandos (usando el sintaxis del profe)
//  - Metodo para posicionar los barcos
//  - Crear clase player.h
//  - Funcion para atacar al azaar
//  - Funcion para guardar coordenadas de ataques realizados
//  - Terminar clase iocommand.h <-- Leonardo
//  - Crear clase file.h (parte de iocommand <-- Leonardo)





#include "board.h"
#include "player.h"
#include "iocommand.h"


using namespace std;

int main() {
    player player_test;
    filesystem::path path = R"(C:\Users\leona\OneDrive\UTEC\2021-2\PROG2\Proyecto-Lab-Progra\io)";

    IOcommand io(player_test, path);

}