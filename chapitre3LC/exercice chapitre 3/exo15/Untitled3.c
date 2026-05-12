#include <stdio.h>
int main()
{
    int i,n,j,produit,s,m;
    do
    {
        printf("veuillez entrer un nombre positif:");
        scanf("%d",&n);
    }
    while(n<0);
    produit=1;
    m=n/2;
    for(i=1; i<m; i++)
    {
        s=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        if(s==i)
        {
            produit=produit*s;
            printf("%d \n",produit);
        }
    }
    printf("le produit de nombre parfait compris entre 1 et la moitié de %d est %d",n,produit);
    return 0;
}
