//
// Created by leona on 25 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_PLAYER_H
#define PROYECTO_LAB_PROGRA_PLAYER_H

#include "iostream"

using std::string;

class player {
public:
    string number = "FirstPlayer";
    string handshake="ASSDhfg";

    const string &getNumber() const {
        return number;
    }

    void setNumber(const string &number) {
        player::number = number;
    }

    const string &getHandshake() const {
        return handshake;
    }

    void setHandshake(const string &handshake) {
        player::handshake = handshake;
    }
};


#endif //PROYECTO_LAB_PROGRA_PLAYER_H
