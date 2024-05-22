#include<stdio.h>
#include <stdlib.h>

int main(){
    int moneta;

    while(1){
        printf("lancia la moneta con invio");
        getchar();
        moneta =rand()%100;

        if(moneta<=70){
            printf("e' uscito testa: \n");
        }else printf("e' uscito croce: \n");
    }

}fhbjjri
