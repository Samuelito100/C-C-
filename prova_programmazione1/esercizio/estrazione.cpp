#include <iostream>
#include <time.h>
#include "estrazione.h"
int estrazione (int a, int b){
    int risultato,num,scelta;
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