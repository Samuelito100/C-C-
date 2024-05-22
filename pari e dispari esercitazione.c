#include <stdio.h>

int main (){
	int numero,resto,i,controllo;
	
	printf("inserisci un numero\n");
	scanf("%d",&numero);
	
	
	while(numero<1){
		printf("il numero non e'accettabile\n");
		printf("inserisci un numero\n");
		scanf("%d",&numero);
	}
	
	for(i=1;i<numero+1;i++){
		resto=i%2;
		if(resto==0){
			printf("il numero %d e' pari\n",i);
		}else{
			printf("il numero %d e' dispari\n",i);
		}
		
	}
	return 0;
}