//
// Created by leona on 24 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_IOCOMMAND_H
#define PROYECTO_LAB_PROGRA_IOCOMMAND_H

#include <iostream>
#include <file.h>

using std::string;
using std::fstream;
using std::filesystem::path;


class IOcommand {
private:
    int command_counter = 0;
    string token;
    path IOdirectory;
    player player;
    file fileIn;
    file fileOut;
    file fileNot;


public:
    IOcommand(const class player& player, const path& directory): IOdirectory(directory) {
        // Use absolute path
        fileIn.initialize(IOdirectory / (player.number+".in"));
        fileOut.initialize(IOdirectory / (player.number+".out"));
        fileNot.initialize(IOdirectory / (player.number+".not"));
    }
    virtual ~IOcommand()= default;

    const string &getDirectory() const {
        return IOdirectory;
    }

    const string &getToken() const {
        return token;
    }

    const class player &getPlayer() const {
        return player;
    }

    const file &getFileIn() const {
        return fileIn;
    }

    const file &getFileOut() const {
        return fileOut;
    }

    const file &getFileNot() const {
        return fileNot;
    }


};


#endif //PROYECTO_LAB_PROGRA_IOCOMMAND_H
