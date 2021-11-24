#include <string>

using namespace std;

class Tablero{
private:
  const int size=11;
  string** zona;
  string letters[10] = {"A","B","C","D","E","F","G","H","I","J"};

  void inicializar(){
    zona = new string*[size];
    for(auto i=0; i<size;i++)
      zona[i] = new string[size];
    
    for (int i = 0; i < size; ++i){
      for (int j = 0; j < size; ++j){
        zona[i][j]= " ";
      }
      }
  }

  void completar(){
    for (auto i=1; i<size;i++){
      string num = to_string(i);
      zona[i][0] = num;
      zona[0][i] = letters[i-1];
    }
  }  

public:

  Tablero(){
    inicializar();
    completar();
  }

  void mostrar() {
    for (int i = 0; i < size; ++i){
      for (int j = 0; j < size; ++j){
        cout << this->zona[i][j] <<" ";
      }
    cout << "\n";
    }
  }
  
  void colocar(int x, int y, string let){
    this->zona[x][y]= let;
  }

  


};