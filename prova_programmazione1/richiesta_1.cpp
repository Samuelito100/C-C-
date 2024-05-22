#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int estrazione (int a, int b){
    int risultato,num,scelta;
    srand(time(NULL));
    printf("-----------\n");
    printf("scegli che estrazione eseguire\n");
    printf("-----------\n");
    printf("1) per fare l'operazione random da 0 a A\n");
    printf("2) per fare l'operazione random da A a B\n");
    printf("scegli\n");
    scanf("%d",&scelta);
    while (scelta<1||scelta>2)
    {
        printf("hai inserito un valore non valido riprova\n");
        scanf("%d",&scelta);
    }
    if (scelta==1)
    {
        printf("scegli il valore di A\n");
        scanf("%d",&a);
        num= rand()%a+1;
        printf("il numero random tra 0 e %d e' %d",a,num);
    }else{
        printf("scegli il valore di A\n");
        scanf("%d",&a);
        printf("scegli il valore di B\n");
       	scanf("%d",&b);
        num= a+rand()%(b-a+1);
        printf("il numero random tra %d e %d e' %d\n",a,b,num);
    }
    return num;
}

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