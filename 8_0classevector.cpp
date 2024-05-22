#include <iostream>
#include <vector>
using namespace std;

class Voti
{    
    float privato;

    public:
	float orale;
	float scritto;


	
	void media (void)
	{
		cout<<endl<<" la media dei due voti e' ";
		cout<<(orale+scritto)/2.<<endl;
	}

    float getPrivato(void){
        
        //float a=privato;
        return privato;
    }

    Voti( float setOrale, float setScritto, float setPrivato){
        orale=setOrale;
        scritto=setScritto;
        privato=setPrivato;
    }
};

int main (void)
{
vector <int> array_voti1(10);
vector <int> array_voti2;

vector <int> array_voti3= {10,11,15,5};
cout<<" lunghezza primo vettore:   "<< array_voti1.size() <<endl;
cout<<" lunghezza primo vettore:   "<< array_voti2.size() <<endl;   //se null da errore... domandona... a cosa puo servire?

array_voti2.push_back(5);
array_voti2.push_back(10);
array_voti2.push_back(12);
array_voti2.pop_back();
array_voti2.clear();
array_voti2.push_back(99);
array_voti2.push_back(98);

for( int i=0; i<array_voti2.size(); i++){

cout<<"voto"<< i <<" = "<< array_voti2[i] <<endl;   //se null da errore
}
array_voti2.erase(array_voti2.begin()+array_voti2.size());//cancella elemento della posizione 1. QUESTO RIDUCE DIMENSIONALITà?












array_voti2.erase(array_voti2.begin()+1);//cancella elemento della posizione 1. QUESTO RIDUCE DIMENSIONALITà?
array_voti2.insert(array_voti2.begin()+10,6);// aggiunge elemento 6 nella posizione 1. QUESTO SOVRASCRIVE ELEMENTO?

cout<< "ciao mamma guarda come mi diverto"<< array_voti2.size();
}

/*

vector.clear();



vector.resize(10);
vector.resize(10, 5);
Modifica la dimensione del vettore.
Se n è maggiore della dimensione corrente, vengono aggiunti nuovi elementi con valore value.
 Se n è minore, gli elementi in eccesso vengono rimossi.


swap(vector& other): Scambia il contenuto di due vettori.

vector1.swap(vector2);

size(): Restituisce il numero di elementi nel vettore.
capacity(): Restituisce il numero di elementi che il vettore 
può contenere prima di dover allocare nuova memoria.
empty(): Verifica se il vettore è vuoto.


*/

