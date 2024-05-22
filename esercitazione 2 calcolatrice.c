#include <stdio.h>

int main(){  //programma calcolatrice di samuel messina
	
	int scelta;			//dichiaro le variabili
	float n1,n2;
	float risultato;
	
	scelta=0;
	n1=0;
	n2=0;
	
	printf("ciao, scegli che operazione eseguire\n");	//qui elenco le possibili operazioni e chiedo la scelta
	//do{  
	
	while(scelta!=5){  
	 	printf("1)somma\n");
		printf("2)sottrazione\n");
		printf("3)moltiplicazione\n");
		printf("4)divisione\n");
		printf("5)esci\n");
		scanf("%d",&scelta);
		
		while(scelta<1||scelta>5){				//utilizzo il while per verificare che la scelta rientri tra le operazioni elencate
			printf("scelta non valida riprova\n");
			printf("scegli che operazione eseguire\n");
			scanf("%d",&scelta);
		
		}
		switch (scelta){			//utilizzo lo switch per la gestione delle operazioni dando la possibilità di effettuare più operazioni
		 	case 1:
				 printf("inserisci il primo numero\n");
				 scanf("%f",&n1);	
				 printf("inserisci il secondo numero\n");
				 scanf("%f",&n2);
				 risultato=n1+n2;
				 printf("%2f+%2f=%2f\n",n1,n2,risultato);
			break;
			 
			 case 2:
			 	printf("inserisci il primo numero\n");
				 scanf("%f",&n1);	
				 printf("inserisci il secondo numero\n");
				 scanf("%f",&n2);
				 risultato=n1-n2;
				 printf("%.2f-%.2f=%.2f\n",n1,n2,risultato);
			 break;
			 case 3:
				 printf("inserisci il primo numero\n");
				 scanf("%f",&n1);	
				 printf("inserisci il secondo numero\n");
				 scanf("%f",&n2);
				 risultato=n1*n2;
				 printf("%.2f*%.2f=%2f\n",n1,n2,risultato);
			 break;
			 
			 case 4:
			 	printf("inserisci il primo numero\n");
				 scanf("%f",&n1);	
				 printf("inserisci il secondo numero\n");
				 scanf("%f",&n2);
				 risultato=n1/n2;
				 printf("%.2f/%.2f=%.2f\n",n1,n2,risultato);
			 break;
			
			case 5: 
				printf("stai uscendo dal programma\n");
			break;
		}
	}
	//while (scelta<5);
	return 0;
}