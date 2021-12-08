//
// Created by leona on 7 dic. 2021.
//

#include "filehandler.h"

const path &filehandler::getPath() const {
    return _path;
}

void filehandler::setPath(const path &path) {
    _path = path;
}

const file_time_type &filehandler::getLastWriteTime() const {
    return last_write_time;
}

void filehandler::setLastWriteTime(const file_time_type &lastWriteTime) {
    last_write_time = lastWriteTime;
}


const string &filehandler::getCommand() const {
    return _command;
}

void filehandler::setCommand(const string &command) {
    _command = command;
}

bool filehandler::write(const string &content) {
    fstream file(_path, std::fstream::trunc | std::fstream::out);
    if (file.is_open()) {
        file << content;
        file.close();
        //std::this_thread::sleep_for(std::chrono::milliseconds(200));
        return true;
    }
    std::cout << "Error opening file";
    return false;
}

filehandler::filehandler(const string &path) : _path(path) {}

filehandler::~filehandler() {
}

vector <string> filehandler::read() {
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
    fstream file(_path, std::fstream::in);
    if (file.is_open()) {
        vector<string> lines;
        string line;
        while (getline(file, line)) {
            line.pop_back();
            lines.push_back(line);
        }
        file.close();
        return lines;
    }
    throw std::runtime_error("Error opening file");
}
