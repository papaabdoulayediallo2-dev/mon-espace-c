#include <stdio.h>
int main()
{
    float div;
    int n,i,j,s,k,premier,cpt,cpt1;

    do
    {
        printf("entrer un nombre:");
        scanf("%d",&n);
    }while(n<=0);

    cpt=0;
    s=0;
    for(j=1; j<n; j++)
    {
        if(n%j==0)
        {
            s=s+j;
        }
    }
    if(s==n)
    {
        cpt++;
    }
    if(cpt==1)
    {
        cpt1=0;
        for(i=1; i<=n; i++)
        {
            premier=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    premier++;
                }
            }
            if(premier==2)
            {
                cpt1++;
            }
        }
    }

    if(cpt==1)
    {
        if(cpt1>0)
        {
            div=(float)n/cpt1;
            printf("N=%d est parfait.\n", n);
            printf("la division de %d et le nombre de nombre premier %d est %.2f \n",n,cpt1,div);
        }
        else
        {
            printf("Aucun nombre premier trouve.\n");
        }
    }
    if(cpt!=1)
    {
        printf("le nombre saisi n'est pas parfait");
    }
    return 0;
}
