#include <stdio.h>
#include <string.h>
//Gestion Bourses : Structure Date(J,M,A) et Etudiant(Nom, Prénom, DateNaissance, N°Carte, Bourse). Saisir N étudiants. 1. Afficher nom/prénom si nom contient "IO". 2. Etudiant avec le plus long prénom. 3. Pourcentage d'étudiants dont le prénom commence par 'A' et finit par 'E'.
typedef struct {
    int jour, mois, annee;
} Date;

typedef struct {
    char nom[50];
    char prenom[50];
    Date dtNaiss;
    char numCarte[20];
    float bourse;
} Etudiant;

int main() {
    int n;
    printf("Nombre d'etudiants ? ");
    scanf("%d", &n);
    
    int maxLenPrenom = 0;
    char longPrenom[50] = "";
    char longNom[50] = "";
    int cAE = 0;
    
    for(int i=0; i<n; i++) {
        Etudiant e;
        printf("\nEtudiant %d | Nom: ", i+1); scanf("%s", e.nom);
        printf("Prenom: "); scanf("%s", e.prenom);
        printf("Date(J M A): "); scanf("%d %d %d", &e.dtNaiss.jour, &e.dtNaiss.mois, &e.dtNaiss.annee);
        printf("Carte: "); scanf("%s", e.numCarte);
        printf("Bourse: "); scanf("%f", &e.bourse);
        
        // 2. Contient IO
        if(strstr(e.nom, "IO") != NULL || strstr(e.nom, "io") != NULL) {
            printf("-> %s %s contient IO\n", e.prenom, e.nom);
        }
        
        // 3. Plus long prenom
        int lenP = strlen(e.prenom);
        if(lenP > maxLenPrenom) {
            maxLenPrenom = lenP;
            strcpy(longPrenom, e.prenom);
            strcpy(longNom, e.nom);
        }
        
        // 4. Commence par A et finit par E
        if(lenP > 1 && (e.prenom[0] == 'A' || e.prenom[0] == 'a') && (e.prenom[lenP-1] == 'E' || e.prenom[lenP-1] == 'e')) {
            cAE++;
        }
    }
    
    if(maxLenPrenom > 0) {
        printf("\nPlus long prenom : %s %s\n", longPrenom, longNom);
    }
    if(n > 0) {
        printf("Pourcentage A...E : %.2f%%\n", (cAE * 100.0)/n);
    }
    
    return 0;
}