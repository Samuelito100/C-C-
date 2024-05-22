//Samuel messina prova programmazione 12/04/2024
#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int vett1[100];
    int vett2[100];
    int i,j,temp,min;
    srand(time(NULL));
    clock_t start_time,end_time;
    double time;

    for ( i = 0; i < 100; i++)		//popolo i vettori con dei valori random uguali per entrambi
    {
        vett1[i]=rand()%200;
        vett2[i]=vett1[i];
    }
	start_time = clock();
	
    for (i = 0; i < 100-1; i++) {			//metodo del bubblesort
        for (j = 0; j < 100-i-1; j++) {
            if (vett1[j] > vett1[j + 1]) {
                temp = vett1[j];
                vett1[j] = vett1[j + 1];
                vett1[j + 1] = temp;
            }
		}
    }
    
    end_time = clock();
    time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("\n");
    printf("il tempo %f\n",time);
    
    printf("bubblesort\n");
    for (i = 0; i < 100; i++) {
    	printf("%d ", vett1[i]);
	}

	start_time = clock();
	
   for(i = 0; i < 100-1; i++) {		//metodo del selection sort
    	min = i;
        for (j = i + 1; j < 100; j++) {
            if (vett2[j] < vett2[min])
                min = j;
        	}
        	temp = vett2[min];
        vett2[min] = vett2[i];
        vett2[i] = temp;
     
    }
    end_time = clock();
    time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("\n");
	printf("il tempo del selectionsort %f\n",time);
    printf("\n");
	
	
    for (i = 0; i < 100; i++) {
        printf("%d ", vett2[i]);
    }
   
return 0;
}