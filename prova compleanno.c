
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int i, tentativo, compleanno, scelta, scelta_algor, numero_divisione, inizio, fine;
    tentativo = 0;
    inizio = 0;
    fine = 0;

    srand(time(NULL)); 
    compleanno = rand() % 31 + 1;

    printf("Indovina quando ho fatto il compleanno\n");
    scanf("%d", &scelta);
    while (scelta < 1 || scelta > 31){
        printf("Non hai scelto un giorno valido, deve essere tra 1 e 31\n");
        scanf("%d", &scelta);
    }
    printf("Scegli che algoritmo usare\n");
    printf("1) Algoritmo sequenziale\n");
    printf("2) Algoritmo ottimizzato\n");
    scanf("%d", &scelta_algor);					
    
    while (scelta_algor < 1 || scelta_algor > 2){
        printf("Non hai scelto un numero corretto, scegli un numero tra 1 e 2\n");
        scanf("%d", &scelta_algor);
    }
   
    if (scelta_algor == 1){
        if (scelta == compleanno){
            printf("Complimenti! Hai indovinato al primo tentativo\n");
        }
        else if (scelta < compleanno){
            for (i = scelta; i < compleanno; i++){
                scelta = scelta + 1;
                tentativo = tentativo + 1;
                if (scelta == compleanno){
                    printf("Hai indovinato al tentativo numero %d. Il giorno del compleanno è il %d\n", tentativo, compleanno);
                }
            }
        }
        else{
            for (i = scelta; i > compleanno; i--){
                scelta = scelta - 1;
                tentativo = tentativo + 1;
                if (scelta == compleanno){
                    printf("Hai indovinato al tentativo numero %d. Il giorno del compleanno è il %d\n", tentativo, compleanno);
                }
            }
        }
    }
    else{
        if (scelta == 16){
            printf("Il giorno del compleanno è il 16\n");
        }
        else if (compleanno > 16){
            tentativo = 0;
            inizio = 16;
            fine = 31;
            numero_divisione = (inizio + fine) / 2;
            while (numero_divisione != compleanno){
                inizio = numero_divisione;
                numero_divisione = (inizio + fine) / 2; 
                tentativo = tentativo + 1;
            }
            printf("Hai indovinato al tentativo numero %d. Il giorno del compleanno è il %d\n", tentativo, compleanno);
        }
        else{
            inizio = 1;
            fine = 16;
            numero_divisione = (inizio + fine) / 2;
            while (numero_divisione != compleanno){
                fine = numero_divisione;
                numero_divisione = (inizio + fine) / 2; 
                tentativo = tentativo + 1;
            }
            printf("Hai indovinato al tentativo numero %d. Il giorno del compleanno è il %d\n", tentativo, compleanno);
        }
    }
    return 0;
}