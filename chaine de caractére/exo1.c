#include <stdio.h>
#include <string.h>
struct DTN
{
    int jour;
    int mois;
    int annee;
};
struct Etudiant
{
    char nom[5];
    char prenom[50];
    char matricul[50];
    char pays[50];
    char quartier[50];
    DTN Date;
    int age;
    float moyenne[50];
};
int main()
{
    struct Etudiant e;
    struct Etudiant max;
    int cpt1,cpt2,cpt3,somme1,k,i;
    do
    {
        printf("Nombre d'etudiant: ");
        scanf("%d",&k);

    }while(k<=0);

    getchar();
    for(i=1; i<=k; i++)
    {
        printf("nom: ");
        fgets(e.nom,sizeof(e.nom),stdin);

        printf("prenom: ");
        fgets(e.prenom,sizeof(e.prenom),stdin);

        printf("age:");
        scanf("%d",&e.age);

        printf("pays:");
        fgets(e.pays,sizeof(e.pays),stdin);

        printf("date de naissance");
        printf("\njour:");
        scanf("%d",e.Date.jour);

        printf("mois:");
        scanf("%d",e.Date.mois);

        printf("annee:");
        scanf("%d",e.Date.annee);

        printf("moyenne: ");
        scanf("%f",&e.moyenne);

        int n=strlen(e.nom);
        int n1=strlen(e.prenom);

        if(e.pays=="senegal"){
            cpt1++;
        }
        if(e.nom[0]=='F' && e.nom[1]=='a' && e.prenom[])
    }
    return 0;
}
