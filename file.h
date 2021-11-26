//
// Created by leona on 25 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_FILE_H
#define PROYECTO_LAB_PROGRA_FILE_H

#include "iostream"
#include "fstream"
#include "filesystem"
#include "chrono"

using std::string;
using std::fstream;
using std::filesystem::path;
using std::filesystem::last_write_time;
using std::filesystem::file_time_type;

class file {
private:
    path _path;
    file_time_type last_write_time;
    fstream file_stream;
    string _command;

public:

    void initialize(const string& path){
        _path = path;
        file_stream = fstream(path);
    }
    bool handshake(const string& command){
        
    }
};



#endif //PROYECTO_LAB_PROGRA_FILE_H
