#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    double pi_greco,nc,r,x,y,ntot,i,n_rip;
    nc=0;
    n_rip=10000;
    srand(time(NULL));

    for ( i = 0; i < 10000; i++)
    {
        x=(double)(rand()%10000)/10000;
        y=(double)(rand()%10000)/10000;
        r=sqrt(x*x+y*y);
        if(r<1){
           // printf("numero sotto soglia %f %f %f \n",r,x,y);
            nc=nc+1;
        //}else  //printf("numero sopra soglia %f %f %f\n",r,x,y);
    }
}
    pi_greco=(nc/n_rip)*4;
    printf("il pigreco e' %f",pi_greco);
return 0;
}