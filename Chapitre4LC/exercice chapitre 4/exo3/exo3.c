#include <stdio.h>
struct ETUDIANT{
    char prenom[20];
    char nom[20];
    char matricule[20];
    float moyenne;
};
int main()
{
    int k,i;
    struct ETUDIANT e;
    struct ETUDIANT g;
    struct ETUDIANT p;
    do{
        printf("Veuillez entre le nombre d' etudiant que vous voulez saisir leur donnee:");
        scanf("%d",&k);
        if(k<=0){
            printf("ERROR \n");
        }
    }while(k<=0);
    for(i=1;i<=k;i++){
        printf("%d Prenom:",i);
         fflush(stdin);
         gets(e.prenom);
        printf("%d nom:",i);
         fflush(stdin);
         gets(e.nom);
        printf("%d Matricule:",i);
             fflush(stdin);
             gets(e.matricule);
        do{
            printf("%d Moyenne:",i);
            scanf("%f",&e.moyenne);
        }while(e.moyenne<0 || e.moyenne>20);
        if(i==1){
            g=e;
        }else if(g.moyenne<e.moyenne){
            p=g;
            g=e;
        }else if(e.moyenne<g.moyenne && e.moyenne<p.moyenne){
            p=e;
        }else if(e.moyenne>g.moyenne && e.moyenne>p.moyenne){
            g=e;
        }
    }
    printf("l'etudiant qui a le le plus grand moyenne est %s %s du matricule %s \n avec une moyenne de %.2f\n",g.prenom,g.nom,g.matricule,g.moyenne);
    printf("le ndaree est %s %s du matricule %s \n avec un moyenne catastrophique de %.2f \n",p.prenom,p.nom,p.matricule,p.moyenne);
    return 0;
}
