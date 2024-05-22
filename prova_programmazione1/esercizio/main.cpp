#include <iostream> 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "estrazione.h"
#include "moltiplicazione.h"


int main (){
	srand(time(NULL));
    int a,b,scelta,num,c,scelta_operazione,contatore;
    contatore=0;
   while (scelta_operazione>0||scelta_operazione<1)
   {
    a=0;
    b=0;
    c=0;
    scelta=0;
    num=0;
    printf("-----------\n");
    printf("scegli che operazione eseguire\n");
    printf("-----------\n");
    printf("1) estrazione random\n");
    printf("2) moltiplicazione\n");
    printf("3) esci\n");
    scanf("%d",&scelta_operazione);
    while (scelta_operazione<1||scelta_operazione>3)
    {
     printf("hai inserito un valore non valido riprova\n");
     scanf("%d",&scelta_operazione);
    }

        if (scelta_operazione==1)
    {
        estrazione(a,b);
        contatore=contatore+1;
        if (contatore==3)
        {
            printf("complimenti! vedo che adori i numeri random!\n");
            printf("\n");
            contatore=0;
        }
        

    } 
        else if (scelta_operazione==2)
    {
         moltiplicazione(a,b,c);
    }
        else
    {
       printf("sei uscito dal programma\n");
    }
   }

    return 0;
}