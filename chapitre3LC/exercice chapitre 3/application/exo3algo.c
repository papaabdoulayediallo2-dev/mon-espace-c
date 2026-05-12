#include <stdio.h>
int main()
{
    int n,i,cpt,cpt1,nbrp;
    nbrp=0;
    cpt1=0;
    do
    {
        printf("entre positif:");
        scanf("%d",&n);
    }while(n<=0);

    while(cpt1<n){
        cpt=0;
        for(i=1; i<=nbrp; i++)
        {
            if(nbrp%i==0)
            {
                cpt++;
            }
        }
        if(cpt==2)
        {
            printf("%d \n",nbrp);
            cpt1++;
        }
        nbrp++;
    }
    return 0;
}
