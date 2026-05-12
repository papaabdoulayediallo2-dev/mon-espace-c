#include <stdio.h>
struct ETUDIANT
{
    char prenom[20];
    char nom[20];
    int age;
    float moyenne;
};
int main()
{
    int k,i,cpt,cpt1;
    float moy,calc,pc,rap;
    struct ETUDIANT e;
    struct ETUDIANT g;
    struct ETUDIANT p;
    do
    {
        printf("Veuillez entre le nombre d' etudiant que vous voulez saisir leur donnee:");
        scanf("%d",&k);
        if(k<=0)
        {
            printf("ERROR \n");
        }
    }
    while(k<=0);
    moy=0;
    for(i=1; i<=k; i++)
    {
        printf("%d Prenom:",i);
        fflush(stdin);
        gets(e.prenom);
        printf("%d nom:",i);
        fflush(stdin);
        gets(e.nom);
        do{
             printf("%d age:",i);
             scanf("%d",&e.age);
        }while(e.age<=0);
        do
        {
            printf("%d Moyenne:",i);
            scanf("%f",&e.moyenne);
        }while(e.moyenne<0 || e.moyenne>20);
        moy+=e.moyenne;
        if(e.age>=18 && e.moyenne<10){
            cpt++;
        }
        if(e.age<18 && e.moyenne>=10){
            cpt1++;
        }

    }
    calc=(float)cpt/k;
    pc=calc*100;
    printf("le nombre d'etudiant majeur n'ayant pas eu la moyenne est: %d \n",cpt);
    printf("le pourcentage d'etudiant mineur ayant eu la moyenne est: %.2f \n",pc);
    if(cpt>0){
        rap=pc/cpt;
        printf("le rapport entre ce pourcentage et le nombre d'etudiants majeurs qui n'ont pas eu la moyenne est: %.2f \n",rap);
    }else{
        printf("impossible de faire le rapport");
    }
    return 0;
}
