#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vett[50];
    int i, j, temp,controllo,x;
    
	x=0;
    srand(time(NULL));

    for (i = 0; i < 50; i++) {
        vett[i] = rand() % 100;
        printf("%d ", vett[i]);
    }

	printf("\n");
    printf("Adesso ordiniamo questo vettore in ordine crescente:\n");
    

    for (i = 0; i < 50-1; i++) {
    	controllo=0;
        for (j = 0; j < 50-i-1; j++) {
            if (vett[j] > vett[j + 1]) {
                temp = vett[j];
                vett[j] = vett[j + 1];
                vett[j + 1] = temp;
                controllo=1;  
            }
		}
		if(controllo==0){
            x=i;
       		break;		
      	}
	}
    
    for (i = 0; i < 50; i++) {
        printf("%d ", vett[i]);
    }
	printf("uscito al giro %d",x);
    return 0;
}
