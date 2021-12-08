// Proyecto Final
// PROG2 | 2021 - 2.

//TODO:
//  - Adaptar board.h a usar templates <-- Listo
//  - Función que lea y escriba comandos (usando el sintaxis del profe) <-- casi listo
//  - Metodo para posicionar los barcos
//  - Crear clase player.h
//  - Funcion para atacar al azar
//  - Funcion para guardar coordenadas de ataques realizados
//  - Terminar clase iocommand.h <-- Leonardo
//  - Crear clase file.h (parte de iocommand <-- Leonardo)





#include "board.h"
#include "player.h"
//#include "iocommand.h"
#include "funciones.h"
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    player player_test;
    vector<int> vec;
    string str = "ATTACK=C1";
    //filesystem::path path = R"(C:\Users\leona\OneDrive\UTEC\2021-2\PROG2\Proyecto-Lab-Progra\io)";

    //IOcommand io(player_test, path);

    auto *zona_propia = new Board<char>();
    auto *zona_contraria = new Board<char>();
    zona_propia->show();
    zona_propia->setItem(4, 3, 'X');
    zona_propia->show();

    vector<string> v = split(str, '=');
    for (auto i : v) cout << i << endl;

    /*
    Error al importar la funcion del archivo funciones.h, pero funciona correctamente si se implementa directamente en el main.
    pair<bool, int> ataque1=findInVector<string>(v, "C1");
    cout << ataque1.second <<endl;
    */

    delete zona_propia;
}


  

    