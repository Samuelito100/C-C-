#include <iostream>
#include <cmath> 
using namespace std;

class Solido {
private:
  
public:
 
  float lato;
  float volume = 25.0;
  
  void descriz() {
    cout << "Questo è un solido e il suo volume e'" << volume << endl;
  }
};

class Cubo : protected Solido {
public:
  
  Cubo(float lato) {
    this->lato = lato;
  }

  
  float descriz() {
    cout << "Questo e'' il volume del cubo" << endl;
    return lato * lato * lato;
  }
};

class Sfera : private Solido {
public:
  // Costruttore per inizializzare il raggio della sfera (modificato `lato` in `raggio`)
  Sfera(float lato){
    this->lato = lato;
  }

  float descriz() {
    cout << "Questa e' il volume della sfera"<<endl;
    return (4.0 / 3.0) * 3,14 * lato * lato * lato;
  }

};

int main() {
  Cubo cubo(5); 
  Sfera sfera(5); 

  cout << cubo.descriz() << endl;  

  cout << sfera.descriz() << endl; 

  return 0;
}