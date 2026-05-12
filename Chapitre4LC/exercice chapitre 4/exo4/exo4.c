#include <stdio.h>
struct EMPLOYER
{
    char code[20];
    int salaire;
    char fonction[20];
    int enfant;
};
int main()
{
    int i,cpt;
    struct EMPLOYER e;
    struct EMPLOYER s;
    cpt=0;
    printf("---Donnee de 10 employee--- \n");
    for(i=1; i<=10; i++)
    {
        printf("%d code: ",i);
        scanf("%s",&e.code);
        do{
            printf("%d salaire: ",i);
            scanf("%d",&e.salaire);
        }while(e.salaire<=0);

        printf("%d fonction: ",i);
        fflush(stdin);
        gets(e.fonction);

        do
        {
            printf("%d nombre enfant: ",i);
            scanf("%d",&e.enfant);
        }while(e.enfant<0);

        printf("l'employer a le code: %s \n son salaire: %d \n fonction %s \n nombre d'enfant: %d \n",e.code,e.salaire,e.fonction,e.enfant);

        if(e.enfant==0)
        {
            cpt++;
        }
    }
    printf("il y'a %d employer qui n'ont pas d'enfant \n",cpt);
    return 0;
}
