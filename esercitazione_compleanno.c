#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>


int main(){
    int i,tentativo,compleanno,scelta,scelta_algor,numero_divisione,inizio,fine;		//dichiaro e inizializzo le variabili
    tentativo=0;
    inizio=0;
    fine=0;

    srand(time(NULL)); 
    compleanno=rand()%31+1;

    printf("indovina quando ho fatto il compleanno\n");
    scanf("%d",&scelta);
    while (scelta<1||scelta>31)			//controllo che la scelta sia corretta
    {
        printf("non hai scelto un giorno valido, deve essere tra 1 e 31\n");
        scanf("%d",&scelta);
    }
    printf("scegli che algoritmo usare\n");
    printf("1) algoritmo sequenziale\n");
    printf("2) algoritmo ottimizzato\n");
    scanf("%d",&scelta_algor);					
    
    while (scelta_algor<1||scelta_algor>2)		//controllo che la scelta sia corretta
  	{
        printf("non hai scelto un numero corretto, scegli un numero tra 1 e 2\n");
      scanf("%d",&scelta_algor);
  	 }
   
    
    if (scelta_algor==1)		//se la scelta è il primo algoritmo inzio con un if per vedere se il numero inserito è quello corretto
    {
        if (scelta==compleanno)
        {
            printf("complimenti hai indovinato al primo tentativo");
        }else if (scelta<compleanno)
        {
            for ( i = scelta; i < compleanno; i++) 	//se non è corretto inizia un ciclo for che incrementa la scelta fino al raggiungimento del compleanno perchè il giorno è piu grande della scelta
            {
                scelta=scelta+1;
                tentativo=tentativo+1;
                if (scelta==compleanno)
                {
                	printf("hai indovinato al tentativo numero %d\n il giorno del compleanno %d",tentativo,compleanno);
                }
                 
            }
            
        }else{
            for ( i = scelta; i > compleanno; i--) //qui decremento perchè il giorno del compleanno è più piccolo della mia scelta
            {
                scelta=scelta-1;
                tentativo=tentativo+1;
                if (scelta==compleanno)
                {
                	printf("hai indovinato al tentativo numero %d\n il giorno del compleanno %d",tentativo,compleanno);
                }
                 
            }
        }
   }else{
    if (compleanno==16)
    {
        printf("il giorno del compleanno è il 16");
    
   }else if (compleanno>16)		//qui se il compleanno è dopo giorno 16 (quindi la metà del mese) diamo a 2 variabili i valori di 16 e 31 e sommando e poi dividendo per 2 fin quanndo lo trova
   {
    tentativo=0;
    inizio=16;
    fine=31;
    numero_divisione=(inizio+fine)/2;
    while (numero_divisione!=compleanno)
    {
        inizio=numero_divisione;
        numero_divisione=(inizio+fine)/2; 
        tentativo=tentativo+1;
    }
    printf("hai indovinato al tentativo numero %d\n il giorno del compleanno %d",tentativo,compleanno);
   }else{
    inizio=1;
    fine=16;
    numero_divisione=(inizio+fine)/2;
    while (numero_divisione!=compleanno)	//qui se il compleanno è prima di giorno 16 (quindi la metà del mese) diamo a 2 variabili i valori di 1 e 16 e sommando e poi dividendo per 2 fin quanndo lo trova
    {
        fine=numero_divisione;
        numero_divisione=(inizio+fine)/2; 
        tentativo=tentativo+1;
    }
    }
   
 }
    return 0;
}

    