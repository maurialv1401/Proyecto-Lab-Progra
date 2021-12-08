//
// Created by leona on 24 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_IOCOMMAND_H
#define PROYECTO_LAB_PROGRA_IOCOMMAND_H

#include <iostream>
#include <filehandler.h>
#include "player.h"
#include "command.h"
#include "vector"
#include "unordered_map"

using std::string;
using std::fstream;
using std::filesystem::path;
using std::vector;
using std::unordered_map;


class IOcommand {

private:
public:
    IOcommand(const path &directory, const player &player);
    bool initializeGame();
    command getCommand(vector<string> content, int type);
    void initializeCommandMap();
    virtual ~IOcommand();

private:
    int commandCounter = 0;
    string delim="=";
    path ioDirectory;
    player targetPlayer;
    filehandler *fileIn, *fileOut, *fileNot;
    vector<command> inputHistory;
    unordered_map<string, int> statusMap;
    unordered_map<string, string> constantsMap;
};


#endif //PROYECTO_LAB_PROGRA_IOCOMMAND_H
