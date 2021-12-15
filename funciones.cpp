#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include "funciones.h"
#include "board.h"
using namespace std;


const vector<string> letters = {"A","B","C","D","E","F","G","H","I","J"};
const vector<string> nums = {"1","2","3","4","5","6","7","8","9","10"};
vector<string> shots;

vector<string> split (const string &s, char delim) {
  vector<string> result;
  stringstream ss (s);
  string item;
  while (getline (ss, item, delim)) {
    result.push_back (item);
  }

  return result;
}

void save_pos(string pos){
  shots.push_back(pos);
}
void show_vec(){
  for(auto c: shots) cout<<c<<endl;
}

bool find_vec(string position){
  for (auto coord: shots){
    if (coord == position)
      return true;
  }
  return false;
    
}

string pos_to_string(int r, int c){
  string res = letters[r]+nums[c];
  return res;
}


string random_pos(){
  srand(time(NULL));
  int n1=rand()%10;
  int n2=rand()%10;
  string res = letters[n1]+nums[n2];
  return res;
}
