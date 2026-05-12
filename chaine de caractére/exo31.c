#include <stdio.h>
#include <string.h>

typedef struct {
    char code[10];
    char libelle[50];
    float prix;
    int quantite;
} Produit;

int main() {
    int N;
    printf("Nombre de produits : ");
    scanf("%d", &N);

    Produit stock[100];

    // 1. Remplissage avec controle de saisie
    for(int i = 0; i < N; i++) {
        printf("\n--- Produit %d ---\n", i + 1);

        // Controle strict du Code Produit
        do {
            printf("Code (Commence par 'P', 4 caracteres max) : ");
            scanf("%s", stock[i].code);
        } while(stock[i].code[0] != 'P' || strlen(stock[i].code) > 4);

        printf("Libelle : "); scanf("%s", stock[i].libelle);
        printf("Prix Unitaire : "); scanf("%f", &stock[i].prix);
        printf("Quantite : "); scanf("%d", &stock[i].quantite);
    }

    printf("\n--- Contenu du Stock ---\n");
    int nbContientM = 0;

    for(int i = 0; i < N; i++) {
        printf("Code: %s | Libelle: %s | Prix: %.2f | Qte: %d\n",
            stock[i].code, stock[i].libelle, stock[i].prix, stock[i].quantite);

        // Recherche de 'm' ou 'M' dans le libellé
        int contientM = 0;
        for(int j = 0; j < strlen(stock[i].libelle); j++) {
            if(stock[i].libelle[j] == 'm' || stock[i].libelle[j] == 'M') {
                contientM = 1;
                break; // Dès qu'on trouve un 'm', on stoppe la recherche
            }
        }

        if(contientM) nbContientM++;
    }

    printf("\n=> Produits contenant 'M' ou 'm' : %d\n", nbContientM);
    return 0;
}
