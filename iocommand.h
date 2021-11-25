//
// Created by leona on 24 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_IOCOMMAND_H
#define PROYECTO_LAB_PROGRA_IOCOMMAND_H

#include <filesystem>
#include <iostream>
#include <fstream>
#include <chrono>

using std::string;
using std::fstream;
using std::filesystem::path;
using std::filesystem::last_write_time;
using std::filesystem::file_time_type;

class IOcommand {
private:
    int In_ = 0;
    char player_repr;
    string fileName;
    string token;
    path IOdirectory;
    path filePathIn;
    path filePathOut;
    fstream fileIn;
    fstream fileOut;
    file_time_type fileInLastWriteTime;
    file_time_type fileOutLastWriteTime;
    player player_obj;

public:
    IOcommand(const string& directory, char p, player pl) : player_repr(tolower(p)) {
        // Use absolute path
        this->IOdirectory = path(directory);

        switch (p) {
            case 'f':
                fileName = "FirstPlayer";
                break;
            case 's':
                fileName = "SecondPlayer";
                break;
            default:
                throw std::invalid_argument("Invalid player_repr");
        }
        filePathIn = IOdirectory / (fileName+".in");
        filePathOut = IOdirectory / (fileName+".out");
        handshake();
    }
    virtual ~IOcommand(){
        // Close files
        if (In_ > 0) {
            fileIn.close();
            fileOut.close();
        }
    }

    const string &getDirectory() const {
        return IOdirectory;
    }

    const string &getFileName() const {
        return fileName;
    }
    const string &getToken() const {
        return token;
    }
    void setDirectory(const path &directory) {
        IOcommand::IOdirectory = directory;
    }

    void handshake() {
        // Open in file
        fileIn = fstream(filePathIn);
        fileIn << "HANDSHAKE=" << player_obj.handshake;
        fileIn.close();
        In_++;
    }

    void waitForOut(){
        fileOutLastWriteTime = last_write_time(filePathOut);

        fileOut = fstream(filePathOut);
        fileOut.close();
    }

    void waitforout(){
        fileOut = std::fstream(filePathOut);
        fileOut.close();
    }
};


#endif //PROYECTO_LAB_PROGRA_IOCOMMAND_H
