#include <stdio.h>
#include <string.h>
//Gestion Coopérative : Saisir N producteurs (Nom, Prénom, Surface, Village, Rendement). 1. Production totale. 2. Nom du plus faible rendement. 3. Compter ceux dont : a) le nom est "NDIAYE", b) le prénom commence par "FA", c) le prénom se termine par "LI".
typedef struct {
    char nom[50];
    char prenom[50];
    float surface;
    char village[50];
    float rendement;
} Producteur;

int main() {
    int n;
    printf("Nombre de producteurs ? ");
    scanf("%d", &n);
    
    float prodTotal = 0;
    Producteur pire;
    int premier = 1;
    int cNdiaye = 0, cFa = 0, cLi = 0;
    
    for(int i=0; i<n; i++) {
        Producteur p;
        printf("\nProd %d | Nom: ", i+1); scanf("%s", p.nom);
        printf("Prenom: "); scanf("%s", p.prenom);
        printf("Surface: "); scanf("%f", &p.surface);
        printf("Village: "); scanf("%s", p.village);
        printf("Rendement (t): "); scanf("%f", &p.rendement);
        
        // 2. Total
        prodTotal += p.rendement;
        
        // 3. Pire rendement
        if(premier || p.rendement < pire.rendement) {
            pire = p; premier = 0;
        }
        
        // 4. Comptages
        if(strcasecmp(p.nom, "NDIAYE") == 0) cNdiaye++;
        if(strncmp(p.prenom, "FA", 2) == 0 || strncmp(p.prenom, "Fa", 2) == 0) cFa++;
        
        int l = strlen(p.prenom);
        if(l >= 2 && (p.prenom[l-2] == 'L' || p.prenom[l-2] == 'l') && (p.prenom[l-1] == 'I' || p.prenom[l-1] == 'i')) {
            cLi++;
        }
    }
    
    printf("\n-- Bilan --\nTotal : %.2f tonnes\n", prodTotal);
    if(!premier) printf("Pire : %s %s\n", pire.prenom, pire.nom);
    printf("NDIAYE : %d\nFA... : %d\n...LI : %d\n", cNdiaye, cFa, cLi);
    
    return 0;
}