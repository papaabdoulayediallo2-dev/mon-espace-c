#include <stdio.h>
struct PRODUIT{
int code;
char nom[2];
float prix,Q;
};
int main()
{
    struct PRODUIT p;
    printf("donner le code : ");
    scanf("%d",&p.code);
    printf("donner la nom : ");
    scanf("%s",&p.nom);
    printf("donner la quantite :");
    scanf("%f",&p.Q);
    printf("Entrer le prix unitaire :");
    scanf("%f",&p.prix);
    printf("le produit est caracteriser par \n le code: %d \n le nom: %s \n la quantite: %f \n le prix: %f",p.code,p.nom,p.Q,p.prix);

    return 0;

}
