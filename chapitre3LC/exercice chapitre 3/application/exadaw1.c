#include <stdio.h>
struct NDOGOU
{
    char nom[50];
    float V;
    float G;
    float L;
    float P;
};
int main()
{
    struct NDOGOU n;
    int i,N;
    int kcal;
    do
    {
        printf("Entre le nombre de ndogou:");
        scanf("%d",&N);
    }
    while(N<=0);
    for(i=1; i<=N; i++)
    {
        printf("nom:");
        fflush(stdin);
        gets(n.nom);
        do
        {
            printf("vitamine:");
            scanf("%f",&n.V);
        }
        while(n.V<0);
        do
        {
            printf("Lipides:");
            scanf("%f",&n.L);
        }
        while(n.L<0);
        do
        {
            printf("Glucide:");
            scanf("%f",&n.G);
        }
        while(n.G<0);
        do
        {
            printf("Protide:");
            scanf("%f",&n.P);
        }
        while(n.P<0);
        kcal=(n.L*9)+(n.G*4)+(n.P*4);
        printf("le rapport energetique est %d \n",kcal);
        if(kcal>2700)
        {
            printf("ndogou royal \n");
        }
        else if(kcal>=2200 && kcal<=2700)
        {
            printf("ndogou celibataire \n");
        }
        else if(kcal<2000)
        {
            printf("pire ndogou \n");
        }
        else
        {
            printf("ndogou non categoriser \n");
        }

    }
    return 0;
}
