#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int vett1[100];
    int vett2[100];
    int i,j,temp,min;
    srand(time(NULL));

    for ( i = 0; i < 100; i++)
    {
        vett1[i]=rand()%200;
        vett2[i]=vett1[i];
    }

    for (i = 0; i < 100-1; i++) {
        for (j = 0; j < 100-i-1; j++) {
            if (vett1[j] > vett1[j + 1]) {
                temp = vett1[j];
                vett1[j] = vett1[j + 1];
                vett1[j + 1] = temp;
            }
		}
    }
    printf("bubblesort\n");
    for (i = 0; i < 100; i++) {
    	printf("%d ", vett1[i]);
	}

   for(i = 0; i < 100-1; i++) {
    	min = i;
        for (j = i + 1; j < 100; j++) {
            if (vett2[j] < vett2[min])
                min = j;
        	}
        temp = vett2[min];
        vett2[min] = vett2[i];
        vett2[i] = temp;
    }
    printf("\n");
	printf("selectionsort\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vett2[i]);
    }
   
return 0;
}