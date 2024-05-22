#include<stdio.h>
#include<math.h>

float calcola_somma(float a,float b){ //funzione che calcola la somma
	float risultato_somma;
    printf("inserisci il primo numero\n");
	scanf("%f",&a);	
	printf("inserisci il secondo numero\n");
	scanf("%f",&b);
	risultato_somma = a + b;
	return risultato_somma;
}
float calcola_potenza(float a,int b=2){ 
	float risultato_potenza;
    printf("inserisci il primo numero\n");
	scanf("%f",&a);	
	//printf("inserisci il secondo numero\n");
	//scanf("%f",&b);
	risultato_potenza = pow(a,b);
	return risultato_potenza;
}
float calcola_sottrazione(float a,float b){ //funzione che calcola la somma
	float risultato_sottrazione;
    printf("inserisci il primo numero\n");
	scanf("%f",&a);	
	printf("inserisci il secondo numero\n");
	scanf("%f",&b);
	risultato_sottrazione = a - b;
	return risultato_sottrazione;
}
float calcola_moltipicazione(float a,float b){ //funzione che calcola la somma
	float risultato_moltiplicazione;
    printf("inserisci il primo numero\n");
	scanf("%f",&a);	
	printf("inserisci il secondo numero\n");
	scanf("%f",&b);
	risultato_moltiplicazione = a * b;
	return risultato_moltiplicazione;
}
float calcola_divisione(float a,float b){ //funzione che calcola la somma
	float risultato_divisione;
    printf("inserisci il primo numero\n");
	scanf("%f",&a);	
	printf("inserisci il secondo numero\n");
	scanf("%f",&b);
	risultato_divisione = a / b;
	return risultato_divisione;
}

int main (){
    float n1,n2,risultato;
    int scelta;
    risultato=0;
	n1=0;
	n2=0;
	
	printf("ciao, scegli che operazione eseguire\n");	//qui elenco le possibili operazioni e chiedo la scelta
	//do{  
	
	while(scelta!=6){  
	 	printf("1)somma\n");
		printf("2)sottrazione\n");
		printf("3)moltiplicazione\n");
		printf("4)divisione\n");
        printf("5)potenza\n");
		printf("6)esci\n");
		scanf("%d",&scelta);
		
		while(scelta<1||scelta>6){				//utilizzo il while per verificare che la scelta rientri tra le operazioni elencate
			printf("scelta non valida riprova\n");
			printf("scegli che operazione eseguire\n");
			scanf("%d",&scelta);
		
		}
		switch (scelta){			//utilizzo lo switch per la gestione delle operazioni dando la possibilità di effettuare più operazioni
		 	case 1:
				 risultato=calcola_somma(n1,n2);
				 printf("il risultato della somma e' %.2f\n",risultato);
			break;
			 
			 case 2:
				 risultato=calcola_sottrazione(n1,n2);
				 printf("il risultato della sottrazione e' %.2f\n",risultato);
			 break;
			 case 3:
				 risultato=calcola_moltipicazione(n1,n2);
				 printf("il risultato della moltiplicazione e' %.2f\n",risultato);
			 break;
			 
			 case 4:
				 risultato=calcola_divisione(n1,n2);
				 printf("il risultato della divisione e' %.2f\n",risultato);
			 break;
			
			case 5: 
				risultato=calcola_potenza(n1);
                printf("il risultato della potenza e' %.2f\n",risultato);
			break;
            case 6:
                printf("stai uscendo dal programma\n");
		}
	}
	//while (scelta<5);
	return 0;
}