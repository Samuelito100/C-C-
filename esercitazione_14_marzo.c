#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int i,giorni_seq,compleanno,scelta,scelta_algor;

    srand(time(NULL)); 
    compleanno=rand()%31;

    while (compleanno>1)
    {
        printf("scegli quale algoritmo usare\n");
        printf("1) algoritmo con sistema sequenziale");
        printf("2) algoritmo ottimizzato");
        scanf("%d",&scelta);
        if (scelta_algor==1)
        {
            printf("indovina quando ho fatto il compleanno\n");
            scanf("%d",&scelta)
            while (scelta<1||scelta>31)
            {
                printf("scegli un giorno compreso tra 1 e 31\n");
                scanf("%d",&scelta);
            }
            while (scelta!=compleanno)
            {
                if (scelta<compleanno)
                {
                    for ( i = scelta; i <compleanno ; i--)
                    {
                        if (scelta==compleanno)
                        {
                            printf("il giorno del tuo compleanno e'%d"&compleanno);
                        }else printf("il tuo compleanno non e' giorno %d"%scelta);
                        
                    }
                    
                }else if (scelta>compleanno)
                {
                    for ( i = scelta; i < compleanno; i++)
                    {
                         if (scelta==compleanno)
                        {
                            printf("il giorno del tuo compleanno e'%d"&compleanno);
                        }else printf("il tuo compleanno non e' giorno %d"%scelta);
                    }
                    
                }
                
            }
            
        }
        

    }


return 0;
}