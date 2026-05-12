#include <stdio.h>
int main()
{
    int n,i,cpt,cpt1,j,n1,cpt2,cpt3,cpt4,p=1;
    float moy;
    do
    {
        printf("veuillez entre un nombre composite:");
        scanf("%d",&n);
        cpt=0;
        cpt1=0;
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                cpt++;
            }
        }
        if(cpt>2)
        {
            printf("%d est composite",n);
            cpt1++;
        }
        else
        {
            printf("%d n'est pas composite\n",n);
        }
    }
    while(cpt1!=1);
    cpt2=0;
    cpt4=0;
    if(cpt1==1)
    {
        do
        {
            printf("veuillez entre %d valeur:",n);
            scanf("%d",&n1);
            cpt2++;
            for(i=1; i<=n1; i++)
            {
                if(n1%i==0)
                {
                    cpt++;
                }
            }
            if(cpt>2)
            {
                printf("%d est composite",n1);
                if(n1%2==0 && n1%5==0){
                    cpt4++;
                }

            }
            if(n1%2!=0 && n1%3==0){
                p=p*n1;
            }
            }while(cpt2<n);
            moy=(float)cpt4/n;
            printf("la moyenne des nombre commer est %f\n",moy);
            printf("le produit des nombre vigilant est %d ",p);

        }
    return 0;
}
