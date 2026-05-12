#include <stdio.h>
int main()
{
    int i,n,j,p=1,s,pp;
    do
    {
        printf("Veuille entre un nombre positif: ");
        scanf("%d",&n);
    }
    while(n<=0);
    for (i=1; i<=n/2; i++)
    {
        s=0;
        for (j=1; j<i; j++)
        {
            if(i%j==0)
            {
                s=s+j;

            }
        }
        if(s==i)
        {
            p=p*s;
            printf("%d \n",p);
        }

    }
    pp=p*(n/2);
    printf("le produit de nombre parfait compris entre 1 et la moitié de %d est %d",n,pp);
    return 0;
}
