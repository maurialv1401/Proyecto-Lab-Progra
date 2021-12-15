

#include "iocommand.h"

using std::fstream;
using std::string;
using std::filesystem::path;


IOcommand::IOcommand(const path &directory, player *player) : ioDirectory(directory), targetPlayer(player) {
    fileIn = new filehandler(ioDirectory / (player->getNumber() + ".in"));
    fileOut = new filehandler(ioDirectory / (player->getNumber() + ".out"));
    fileNot = new filehandler(ioDirectory / (player->getNumber() + ".not"));
    initializeStatusMap();
}

IOcommand::~IOcommand() {
    delete fileIn;
    delete fileOut;
    delete fileNot;
}

bool IOcommand::initializeGame() {
    std::string starting_command = "HANDSHAKE=" + targetPlayer->getHandshake();
    if (fileIn->write(starting_command)) {
        try {
            inputHistory.push_back((readCommand(fileOut->read(), 0)));
        } catch (std::exception &e) {
            return false;
        }


        return true;
    }
    return false;
}

command IOcommand::readCommand(vector<string> content, int type) {

    switch (type) {
        case 0:
            for (const auto &item : content) {
                string token = item.substr(0, item.find(delim));
                string value = item.substr(item.find(delim) + 1);
                constantsMap[token] = value;
                return command(-1, -1, -1);
            }
            break;
    }

    return command(0, 0, 0);
}

void IOcommand::initializeStatusMap() {
    statusMap["FAILED"] = 0;
    statusMap["DAMAGED"] = 1;
    statusMap["DESTROYED"] = 2;
    statusMap["GAMEOVER"] = 3;
}

void IOcommand::setInitialPos() {

}
