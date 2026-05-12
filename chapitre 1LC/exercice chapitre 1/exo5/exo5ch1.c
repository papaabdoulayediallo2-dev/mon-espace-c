#include <stdio.h>
#include <math.h>
int main()
{
    float MTTC,MTH,PU;
    int code,Q;
    char libelle[40];
    const float TVA=0.18;
    printf("Saisir les donnees du produit \n");
    printf("entrez le code du produit: \n");
    scanf("%d",&code);
    printf("entrez la libelle du produit: \n");
    scanf("%s",libelle);
    printf("entrez le prix unitaire du produit: \n");
    scanf("%f",&PU);
    printf("entrez la quantite du produit du produit: \n");
    scanf("%d",&Q);
    MTH = PU * Q;
    MTTC = MTH*(1+TVA);
    printf("le produit");
    printf("le code du produit est : %d \n",code);
    printf("la libelle du produit est : %s \n",libelle);
    printf("le prix unitaire du produit est : %.2f \n",PU);
    printf("la quantite du produit est : %d \n",Q);
    printf("le montant hors taxe du produit est : %.2f \n",MTH);
    printf("le montant toutes taxes comprises du produit est : %.2f \n",MTTC);
    return 0;
}
