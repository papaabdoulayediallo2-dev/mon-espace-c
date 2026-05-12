#include <stdio.h>
struct NDOGOU
{
    char nom[50];
    int statut;
};
int main()
{
    struct NDOGOU n;
    int i,N,s,r,c;
    float pc,calc;
    s=0;
    r=0;
    do
    {
        printf("Entre le nombre de ndogou:");
        scanf("%d",&N);
    }
    while(N<=0);
    for(i=1; i<=N; i++){
         printf("nom:");
        fflush(stdin);
        gets(n.nom);
        do
        {
            printf("le statut:");
            scanf("%d",&n.statut);
            if(n.statut!=1 && n.statut!=2 && n.statut!=3){
                printf("error \n");
            }
        }while(n.statut!=1 && n.statut!=2 && n.statut!=3);
        if(n.statut==3){
            s++;
        }
        if(n.statut==1){
            r++;
        }
        if(n.statut==2){
            c++;
        }
    }
    printf("le somme des ndogou SDF est %d ",s);

    pc=r/N*100;
    if(r>0){
        printf("le pourcentage des ndogou royal est %.2f",pc);
    }else{
        printf("pas de ndogou royal");
    }
}
