

#include "iocommand.h"

using std::string;
using std::fstream;
using std::filesystem::path;


IOcommand::IOcommand(const path &directory, const player &player) : ioDirectory(directory), targetPlayer(player) {
    fileIn = new filehandler(ioDirectory / (player.getNumber() + ".in"));
    fileOut = new filehandler(ioDirectory / (player.getNumber() + ".out"));
    fileNot = new filehandler(ioDirectory / (player.getNumber() + ".not"));
}

IOcommand::~IOcommand() {
    delete fileIn;
    delete fileOut;
    delete fileNot;
}

bool IOcommand::initializeGame() {
    std::string starting_command = "HANDSHAKE=" + targetPlayer.getHandshake();
    if (fileIn->write(starting_command)) {
        try {

            inputHistory.push_back((getCommand(fileOut->read(), 0)));

        } catch (std::exception &e) {
            return false;
        }
        return true;
    }
    return false;

}

command IOcommand::getCommand(vector<string> content, int type) {


    switch (type) {
        case 0:
            for (const auto& item : content) {
                string token = item.substr(0, item.find(delim));
                string value = item.substr(item.find(delim) + 1);
                constantsMap[token] = value;

            }
            break;
    }

    return command(0, 0, 0);
}

void IOcommand::initializeCommandMap() {
    statusMap[""]=0;
}

