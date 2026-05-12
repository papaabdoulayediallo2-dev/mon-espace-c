#include <stdio.h>
int main()
{
    int i,n,j,s,cpt;
    float c,p;
    do
    {
        printf("entrez un nombre positif: ");
        scanf("%d",&n);
    }while(n<=0);
    cpt=0;
    for(i=1 ; i<=n ; i++)
    {
        s=0;
        for(j=1; j<i; j++)
        {
            s=s+j;
            if(s==i)
            {
                break;
            }
        }
        if(s==i)
        {
            printf("%d est triangulaire\n",i);
            cpt++;
        }

    }
    c=(float)cpt/n;
    p=c*100;
    printf("le pourcentage des nombres triangulaire compris entre 1 et %d est %.2f%%",n,p);
    return 0;
}
