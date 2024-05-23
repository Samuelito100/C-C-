#include <iostream>
#include <map>
#include <string>
using namespace std;

class Parallelogrammi {
    public: 
    float lato1,lato2;
    bool angol_rett; 

    float perimetro(){
        return 2*(lato1*lato2);
    }
    void descriz(){
        if (angol_rett==1){
            cout<<"e' un rettangolo"<<endl;
        }
        else 
        {
            cout<<"e' un parallelogramma"<<endl;
        }

    }

};

class Rettangoli : public Parallelogrammi {
public:
float area(){
return lato1 * lato2;
};

Rettangoli(float l1,float l2){
    lato1 = l1;
    lato2 = l2;
    angol_rett = 1;
}


};

int main (void){

    Rettangoli oggetto_rett(2.5,7.4);
    cout<<"questo oggetto ha lati adiacenti lunghi ";
    cout<<oggetto_rett.lato1<<" e' "<<oggetto_rett.lato2<<endl;

    oggetto_rett.descriz();

    cout<<endl<<"il perimetro vale "<<oggetto_rett.perimetro()<<endl;
    cout<<"l'area vale: "<<oggetto_rett.area();


}