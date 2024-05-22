#include<iostream>
#include "moltiplicazione.h"

int moltiplicazione (int a,int b,int c){
    int scelta, risultato;
    printf("-----------\n");
    printf("scegli che moltiplicazione eseguire\n");
    printf("-----------\n");
    printf("1) Doppio di un numero\n");
    printf("2)moltiplicazione tra 2 numeri\n");
    printf("3)moltiplicazione tra 3 numeri\n");
    scanf("%d",&scelta);
    while (scelta<1||scelta>3)
    {
        printf("hai inserito un valore non valido riprova\n");
        scanf("%d",&scelta);
    }
    
    if (scelta==1)
    {
        printf("inserisci il valore di A\n");
        scanf("%d",&a);
        risultato=a*2;
        printf("il doppio di %d e' %d\n",a,risultato);
    }else if (scelta==2)
    {
       printf("inserisci il valore di A\n");
        scanf("%d",&a);
        printf("inserisci il valore di B\n");
        scanf("%d",&b);
        risultato=a*b;
        printf("la moltiplicazione tra %d e %d il risultato e' %d",a,b,risultato);
    }else{
        printf("inserisci il valore di A\n");
        scanf("%d",&a);
        printf("inserisci il valore di B\n");
        scanf("%d",&b);
        printf("inserisci il valore di C\n");
        scanf("%d",&c);
        risultato=a*b*c;
        printf("la moltiplicazione tra %d , %d , %d il risultato e' %d",a,b,c,risultato);
    }
    return risultato;
}