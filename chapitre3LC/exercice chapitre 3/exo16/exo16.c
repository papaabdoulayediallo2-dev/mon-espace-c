#include <stdio.h>
int main()
{
    int n,cpt1,cpt,i,j,somme,moyenne;

    cpt1=0;
    do
    {
        printf("Veuille entre un nombre positif: ");
        scanf("%d",&n);
    }
    while(n<=0);
    somme=0;
    moyenne=0;
    for (i=1; i<=n; i++)
    {
        cpt=0;
        for (j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                cpt++;
            }
        }
        if(cpt!=2)
        {
            cpt1++;
            printf("%d\n",i);
            somme=somme+i;
        }
    }
    moyenne=somme/cpt1;
    printf("la moyenne des nombres composites compris entre 1 a %d est %d",n,moyenne);

    return 0;
}
