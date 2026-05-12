#include <stdio.h>
struct MOYENNE{
    char nom[20];
    char prenom[20];
    int age;
};
int main()
{
    int n,i,moy,som;
    struct MOYENNE m;

    do{
        printf("Veuillez entre le nombre de personne que vous voulez saisir leur donnee  ");
        scanf("%d",&n);

    }while(n<=0);
    som=0;
    for(i=1;i<=n;i++){
        printf("%d Prenom : ",i);
        scanf("%s",&m.prenom);

        printf("%d Nom : ",i);
        scanf("%s",&m.nom);

        do{
            printf("%d Age :",i);
            scanf("%d",&m.age);

        }while(m.age<=0);

        som+=m.age;
        printf("prenom: %s \n nom: %s \n Age: %d \n",m.prenom,m.nom,m.age);
    }
    moy=som/n;
    printf("la moyenne des age est %d \n",moy);

    printf("prenom: %s \n nom: %s \n Age: %d \n",m.prenom,m.nom,m.age);
    return 0;
}
