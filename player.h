//
// Created by leona on 25 nov. 2021.
//

#ifndef PROYECTO_LAB_PROGRA_PLAYER_H
#define PROYECTO_LAB_PROGRA_PLAYER_H

#include <iostream>
#include "board.h"
#include "funciones.h"
using std::string;
using std::rand;



class player {
private:
string token=" ";

public:
  
  string number = "FirstPlayer";
  string handshake="test";
  Board<char>* zona = new Board<char>();
  bool hunting = true;
  bool searching = false;
  bool hit=false;
  bool horizontal=false;
  void empezar(){
    // que escriba handshake, espere el archivo .out y guarde el token

  };
  
  void command(string com){}; // escribir archivo con indicacion anadir .in
  // si el archivo.out contiene "DAMAGED" cambiar hunting a false y hit a true. si contiene "DESTROYED" volver a hunting a true, si es "FAILED" volver horizontal a false

  void search(int &r, int &c, int &i){
    if (hit){
      if (horizontal){
        if(zona->isValid(c-1)){
          c--;
          string position="ATTACK="+pos_to_string(r,c);
          command(position);
        }else if(zona->isValid(c+1)){
          c++;
          string position="ATTACK="+pos_to_string(r,c);
          command(position);
        }
      }else{
        if(zona->isValid(r+1)){
          r++;
          string position="ATTACK="+pos_to_string(r,c);
          command(position);
        }else if(zona->isValid(r-1)){
          c--;
          string position="ATTACK="+pos_to_string(r,c);
          command(position);
        }
      }
    }else{

    }
  }

  void turn(int &r, int &c, int &i){
    srand(time(NULL));
    if (hunting){
      r = rand()%zona->getSize();
      c = rand()%zona->getSize();
      string position="ATTACK="+pos_to_string(r,c);
      command(position);
    }else{
      if(!searching and zona->isValid(c-1)){
        string position="ATTACK="+pos_to_string(r,c-1);
        command(position);
        searching = true;
        i=1;
        c--;
        horizontal=true;
      }else if(!searching and zona->isValid(c+1)){
        string position="ATTACK="+pos_to_string(r,c+1);
        command(position);
        searching = true;
        i=2;
        c++;
        horizontal=true;
      }else if(!searching and zona->isValid(r-1)){
        string position="ATTACK="+pos_to_string(r-1,);
        command(position);
        searching = true;
        i=3;
        r--;
      }else if(!searching and zona->isValid(r+1)){
        string position="ATTACK="+pos_to_string(r+1,c);
        command(position);
        searching = true;
        i=4;
        r++;
      }else{
        search(r, c, i); 
      }
  }
  

  }
};


#endif //PROYECTO_LAB_PROGRA_PLAYER_H
