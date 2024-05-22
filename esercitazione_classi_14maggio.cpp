#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Libro {
private:
    string titolo;
    int anno_pubblicazione;

public:
    // Costruttore che inizializza il titolo e l'anno di pubblicazione
    Libro(string titolo, int anno_pubblicazione) : titolo(titolo), anno_pubblicazione(anno_pubblicazione) {}

    // Metodi getter per accedere in sola lettura ai membri privati
    string getTitolo() const {
        return titolo;
    }

    int getAnnoPubblicazione() const {
        return anno_pubblicazione;
    }
};

class catalogo_libri {
private:
    vector<Libro*> Libri;

public:
    // Metodo per aggiungere un libro al catalogo
    void aggiungiLibro(Libro* libro) {
        Libri.push_back(libro);
    }

    // Metodo per eliminare un libro dal catalogo
    void eliminaLibro(const string& titolo) {
        for (auto it = Libri.begin(); it != Libri.end(); ++it) {
            if ((*it)->getTitolo() == titolo) {
                delete *it;  // Dealloca la memoria occupata dal libro
                Libri.erase(it);
                break;
            }
        }
    }

    // Metodo per stampare i dettagli di un libro
    void stampaLibro(const string& titolo) {
        for (const auto& libro : Libri) {
            if (libro->getTitolo() == titolo) {
                cout << "Titolo: " << libro->getTitolo() << ", Anno di pubblicazione: " << libro->getAnnoPubblicazione() << endl;
                break;
            }
        }
    }
};

int main() {
    catalogo_libri catalogo;
    int scelta;

    while (scelta != 4) {
        cout << "Scegli cosa fare:" << endl;
        cout << "1. Aggiungi libro" << endl;
        cout << "2. Elimina libro" << endl;
        cout << "3. Stampa libro" << endl;
        cout << "4. Esci" << endl;
        cin >> scelta;

        switch (scelta) {
        case 1: {
            string titolo;
            int anno;
            cout << "Inserisci il titolo del libro: ";
            cin.ignore();
            getline(cin, titolo);
            cout << "Inserisci l'anno di pubblicazione: ";
            cin >> anno;
            Libro* nuovoLibro = new Libro(titolo, anno);
            catalogo.aggiungiLibro(nuovoLibro);
            break;
        }
        case 2: {
            string titolo;
            cout << "Inserisci il titolo del libro da eliminare: ";
            cin.ignore();
            getline(cin, titolo);
            catalogo.eliminaLibro(titolo);
            break;
        }
        case 3: {
            string titolo;
            cout << "Inserisci il titolo del libro da stampare: ";
            cin.ignore();
            getline(cin, titolo);
            catalogo.stampaLibro(titolo);
            break;
        }
        case 4:
            cout << "Hai scelto di uscire." << endl;
            break;
        default:
            cout << "Scelta non valida. Riprova." << endl;
        }
    }

    return 0;
}


