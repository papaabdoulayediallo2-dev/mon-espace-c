#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[50];
    char dateNaiss[20]; // format jj/mm/aaaa
    float moyenne;
    char matricule[100];
} Etudiant;

int main() {
    int L, C;
    printf("Nombre de lignes et colonnes pour la matrice de la classe ? ");
    scanf("%d %d", &L, &C);

    Etudiant classe[10][10];
    float sommeGenerale = 0;

    for(int i=0; i<L; i++) {
        for(int j=0; j<C; j++) {
            printf("\n--- Eleve [%d][%d] ---\n", i, j);
            printf("Nom : "); scanf("%s", classe[i][j].nom);
            printf("Prenom : "); scanf("%s", classe[i][j].prenom);
            printf("Date (JJ/MM/AAAA) : "); scanf("%s", classe[i][j].dateNaiss);
            printf("Moyenne : "); scanf("%f", &classe[i][j].moyenne);

            sommeGenerale += classe[i][j].moyenne;

            // 1. Calcul de l'age avec sscanf
            int jour, mois, annee;
            sscanf(classe[i][j].dateNaiss, "%d/%d/%d", &jour, &mois, &annee);
            int age = 2026 - annee;

            // 2. Taille du prenom
            int taillePrenom = strlen(classe[i][j].prenom);

            // 3. Generation du matricule final avec sprintf
            sprintf(classe[i][j].matricule, "etu%s%d%d", classe[i][j].nom, age, taillePrenom);
        }
    }

    printf("\n--- Bilan de la Classe ---\n");
    for(int i=0; i<L; i++) {
        for(int j=0; j<C; j++) {
            printf("Mat: %s | %s %s | Moy: %.2f\n",
                classe[i][j].matricule, classe[i][j].prenom, classe[i][j].nom, classe[i][j].moyenne);
        }
    }

    if(L*C > 0) {
        printf("\n=> Moyenne Generale de la Matrice : %.2f\n", sommeGenerale / (L*C));
    }
    return 0;
}
