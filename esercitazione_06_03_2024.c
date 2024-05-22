#include<stdio.h>
#include <time.h>

int main(){
int i,infortunati,num,giocatori,max_rand,non_infortunato;

infortunati=0;
max_rand=2;
giocatori=25;

srand(time(NULL));

for ( i = 0; i < giocatori; i++)
{
    printf("giocatore %d\n",i);
    num=rand()%max_rand;
    if (num==0)
    {
        infortunati=infortunati+1;
        printf("sei infortunato, vai in palestra\n");
    } else {
        non_infortunato=non_infortunato+1;
        printf("non sei infortunato, vai in campo\n");
    }
    
}
if (infortunati==0)
    {
        printf("facciamo la riunione giovedi\n");
    } else if (infortunati<5)
    {
         printf("facciamo la riunione venerdi perche' abbiamo %d infortunati\n",infortunati);
    } else{
         printf("facciamo la riunione sabato perche' abbiamo %d infortunati\n",infortunati);
    }
return 0;

}