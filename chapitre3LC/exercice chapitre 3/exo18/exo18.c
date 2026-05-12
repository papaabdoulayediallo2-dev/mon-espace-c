#include <stdio.h>
int main()
{
    int i,n,s;
    s=0;
    do
    {
        do
        {
                printf("Veuillez en un nombre divisible par 5 et pour arreter veuillez entre 0:");
                scanf("%d",&n);

                if(n%5!=0 || n<0)
                {
                    printf("ERROR \n");

                }

        }while(n%5!=0 || n<0);
        if(n%3==0)
        {
            s+=n;
        }
        if(n%5==0)
        {
            printf("le nombre saisi est divisible par 5\n");
        }
    }while(n!=0);

    printf("la somme des nombre multiple de 3 sont %d",s);
    return 0;
}
