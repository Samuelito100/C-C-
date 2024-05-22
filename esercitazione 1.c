#include<stdio.h>
#include<string.h>

//programma di samuel messina 05/03/2023 preparazione bevanda

int main (){
	int numero_tazzine,i,bevanda,zucchero,proposta; // qui dichiariamo le variabili
	
	proposta=0;
	
	printf("Buongiorno, quante bevande vuoi?\n"); //qui chiedo di inserire quante tazzine vanno servite
	scanf("%d",&numero_tazzine);
	
		while(proposta<3){
			printf("dai prendi qualocosa\n");
			proposta++;
			printf("quante bevande vuoi\n");
			scanf("%d",&numero_tazzine);
		if(proposta==1){
			printf("amuni dai\n");
			printf("quante bevande vuoi\n");
			proposta++;
			scanf("%d",&numero_tazzine);
		}
		if(proposta==2){
			printf("vabbe ciao\n");
			proposta++;
		}
	}
	
	
	
	
	for(i=0;i<numero_tazzine;i++){        //in questo ciclo for prima chiedo di scegliere la bevanda
		printf("scegli la bevanda\n");
		printf("1)tisana\n");
		printf("2)camomilla\n");
		printf("3)the\n");
		scanf("%d",&bevanda);
			while(bevanda<1||bevanda>3){  //una volta scelta la bevanda faccio un controllo per vedere se la scelta rientra tra le proposte
				printf("inserisci una bevanda valida\n");
				scanf("%d",&bevanda);
			}
	
		printf("vuoi zucchero?\n");    //qui chiedo se si gradisce lo zucchero e successivamente faccio un controllo per vedere se la scelta è tra le proposte
		printf("1) si\n");
		printf("2) no\n");
		scanf("%d",&zucchero);
		
			while(zucchero<1||zucchero>2){
				printf("scelta non valida\n");
				scanf("%d",&zucchero);
			}
			
		if(bevanda==1){
			printf("la tisana e' pronta\n");
		}else if(bevanda==2){
			printf("la camomilla e' pronta\n");
		}else printf("il the e' pronto\n");
		
		printf("---------\n");
		printf("andiamo alla preparazione della bevanda %d\n",i+1);
	}
	
return 0;
}
         