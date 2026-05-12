#include <stdio.h>
struct PRODUIT{
    int code;
    char libelle[20];
    int prix;
    int quantite;
};
int main()
{
    int i;
    struct PRODUIT ppc;
    struct PRODUIT p;
    for(i=1;i<=5;i++){
        printf("%d Entrer le nom du produit:",i);
        fflush(stdin);
        gets(p.libelle);
        printf("%d Entrer le code produit:",i);
        scanf("%d",&p.code);
        do{
            printf("%d Entrer le prix du produit:",i);
            scanf("%d",&p.prix);
        }while(p.prix<=0);
        do{
            printf("%d Entre la quantite du produit:",i);
            scanf("%d",&p.quantite);
        }while(p.quantite<=0);
        if(i==1){
            ppc=p;
        }else if(p.prix>=ppc.prix){
            ppc=p;
        }else if(ppc.prix>p.prix){
            ppc=ppc;
        }
    printf("le produit est %s \n son code est %d \n son prix est %d \n sa quantite est %d \n",p.libelle,p.code,p.prix,p.quantite);
    }
    printf("le produit le plus cher est %s \n son code est %d \n son prix est %d \n sa quantite est %d \n",ppc.libelle,ppc.code,ppc.prix,ppc.quantite);
    return 0;
}
