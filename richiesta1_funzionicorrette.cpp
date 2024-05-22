#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int estrazione(int a){
    srand(time(NULL));
    return rand()%a;
}
int estrazione(int a, int b){
    srand(time(NULL));
    return rand()%(b-a+1)+a;
}
int moltiplicazione(int a , int b, int c){
   	int risultato;
    risultato= a*b*c;
    return risultato;
    
}

int main (){
    srand(time(NULL));
    int a,b,scelta,c,risultato;

    printf("scegli che operazione eseguire\n");
    printf("1) Doppio di un numero\n");
    printf("2)moltiplicazione tra 2 numeri\n");
    printf("3)moltiplicazione tra 3 numeri\n");
    scanf("%d",&scelta);
    if (scelta==1)
    {
        printf("scegli il numero da raddoppiare\n");
        scanf("%d",&a);
        b=2;
        c=1;
        moltiplicazione( a, b,c);
        printf("il doppio di %d e' %d",a,risultato);

    } elsif (scelta==2){
    	 printf("scegli il numero da raddoppiare\n");
        scanf("%d",&a);
        scanf("%d",&b);
        b=1;
        c=1;
        moltiplicazione( a, b,c);
        printf("il doppio di %d e' %d",a,risultato);
	}
    return 0;
    
}