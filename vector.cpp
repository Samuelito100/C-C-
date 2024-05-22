#include <iostream>
#include <vector>

using namespace std;

class Voti {
public:
    float orale;
    float scritto;
    float privato;

    // Costruttore senza argomenti
    Voti() {}

    // Costruttore con argomenti
    Voti(float setOrale, float setScritto, float setPrivato) {
        orale = setOrale;
        scritto = setScritto;
        privato = setPrivato;
    }

    // Metodo per calcolare la media
    float media() {
        return (orale + scritto) / 2;
    }
};

// Funzione per stampare il vettore
void stampaVettore(const vector<Voti>& vettore) {
    for (const auto& voto : vettore) {
        cout << "(" << voto.orale << ", " << voto.scritto << ", " << voto.privato << ") ";
    }
    cout << endl;
}

int main() {
    // Dichiarazione di un vettore di voti usando la classe Voti
    vector<Voti> array_voti1(10);

    // Dichiarazione di un vettore vuoto di voti
    vector<Voti> array_voti2;

    // Stampa dei vettori prima di effettuare operazioni
    cout << "Primo vettore prima di erase: ";
    stampaVettore(array_voti1);
    cout << "Secondo vettore prima di insert: ";
    stampaVettore(array_voti2);

    // Creazione di un oggetto Voti e assegnazione di voti
    Voti voti1(8.5, 7.0, 9.0);

    // Calcolo e stampa della media dei voti
    float media = voti1.media();
    printf("Media dei voti: %f\n", media);

    // Eseguiamo un'operazione erase sul vettore array_voti1 per rimuovere l'elemento alla posizione 5
    printf("Eseguito erase sul primo vettore\n");
    if (!array_voti1.empty()) {
        array_voti1.erase(array_voti1.begin() + 5);
    }

    // Stampiamo il vettore dopo l'erase
    cout << "Primo vettore dopo l'erase: ";
    stampaVettore(array_voti1);

    // Eseguiamo un'operazione insert sul vettore array_voti2 per inserire un nuovo elemento all'inizio del vettore
    printf("Eseguito insert sul secondo vettore\n");
    array_voti2.insert(array_voti2.begin(), Voti(7.0, 8.0, 9.0));

    // Stampiamo il vettore dopo l'insert
    cout << "Secondo vettore dopo l'insert: ";
    stampaVettore(array_voti2);

    // Stampa delle nuove dimensioni dei vettori dopo le operazioni erase e insert
    printf("Nuova lunghezza primo vettore: %d\n", array_voti1.size());
    printf("Nuova lunghezza secondo vettore: %d\n", array_voti2.size());

    return 0;
}


