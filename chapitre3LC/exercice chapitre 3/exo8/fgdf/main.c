#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cpt,r,racine;
    do
    {
        cpt=0;
        do
        {
            printf("entrer un nombre carre: ");
            scanf("%d",&n);
            r=(int)sqrt(n);
            racine=r*r;
            if(racine==n)
            {
                cpt++;
            }
            else
            {
                printf("error \n");
            }
        }
        while(cpt!=1);
        if(cpt==1)
        {
            printf("le nombre entrer est un carre");
        }
    }
    while(n<=0);
    return 0;
}
