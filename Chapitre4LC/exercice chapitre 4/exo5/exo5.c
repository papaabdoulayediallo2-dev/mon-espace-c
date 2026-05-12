#include <stdio.h>
struct MATIERE{
    char nom[30];
    int coef;
    float note;
};
int main()
{
    int i,n,som;
    float moy;
    struct MATIERE m;
    struct MATIERE eg;
    do{
        printf("Veuillez entre le nombre de matiere que vous voulez saisir leur donnee:");
        scanf("%d",&n);
    }while(n<=0);
    som=0;
    for(i=1;i<=n;i++){
        printf("%d nom: ",i);
        fflush(stdin);
        gets(m.nom);
        do{
        printf("%d coefficient: ",i);
        scanf("%d",&m.coef);
        }while(m.coef<=0);
        do{
            printf("%d note: ",i);
            scanf("%f",&m.note);
        }while(m.note<0 || m.note>20);
        som+=m.note;
        if(m.coef>=2){
            printf("le matiere %s de coefficient %d et de note %.2f  a un coefficient superieur ou egale a 2 \n",m.nom,m.coef,m.note);
        }
    }
    moy=(float)som/n;
    printf("la moyenne des notes est %.2f",moy);
    return 0;
}
