//
// Created by leona on 7 dic. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_FILEHANDLER_H
#define PROYECTO_LAB_PROGRA_FILEHANDLER_H

#include "filesystem"
#include "fstream"
#include "iostream"
#include "chrono"
#include "thread"
#include "vector"

using std::vector;
using std::string;
using std::fstream;
using std::filesystem::path;
using std::filesystem::last_write_time;
using std::filesystem::file_time_type;


class filehandler{
public:
    explicit filehandler(const string &path);
    bool write(const string &content);
    vector <string> read();
    const path &getPath() const;
    void setPath(const path &path);
    const file_time_type &getLastWriteTime() const;
    void setLastWriteTime(const file_time_type &lastWriteTime);
    const string &getCommand() const;
    void setCommand(const string &command);
    virtual ~filehandler();

private:
    path _path;
    file_time_type last_write_time;
    string _command;
};


#endif //PROYECTO_LAB_PROGRA_FILEHANDLER_H
