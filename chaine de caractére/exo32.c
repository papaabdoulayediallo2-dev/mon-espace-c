#include <stdio.h>
#include <string.h>

typedef struct {
    char serie[50];
    char marque[50];
    char modele[50];
    float prix;
    char pays[50];
    char dateFab[20]; // format jj/mm/aaaa
} Telephone;

int main() {
    Telephone T[100];
    Telephone Tc[100]; // Tableau pour le transfert (Chine)
    int N = 0;
    int Nc = 0;

    printf("--- Saisie du stock (Tapez '000@' dans serie pour arreter) ---\n");

    // 1. Saisie avec condition d'arret
    while(N < 100) {
        printf("\nTelephone %d\n", N + 1);
        printf("Serie : "); scanf("%s", T[N].serie);

        // Condition d'arret speciale avec strcmp
        if(strcmp(T[N].serie, "000@") == 0) {
            break;
        }

        printf("Marque : "); scanf("%s", T[N].marque);
        printf("Modele : "); scanf("%s", T[N].modele);
        printf("Prix : "); scanf("%f", &T[N].prix);
        printf("Pays : "); scanf("%s", T[N].pays);
        printf("Date (JJ/MM/AAAA) : "); scanf("%s", T[N].dateFab);

        N++;
    }

    // 2. Transfert vers Tc avec le Mega-Filtre
    for(int i = 0; i < N; i++) {
        // Filtre 1 : Chine
        if(strcmp(T[i].pays, "Chine") == 0 || strcmp(T[i].pays, "chine") == 0) {

            // Filtre 2 : Date (Mai 2021)
            int jour, mois, annee;
            sscanf(T[i].dateFab, "%d/%d/%d", &jour, &mois, &annee);
            if(mois == 5 && annee == 2021) {

                // Filtre 3 : Commence par A et finit par e
                int tailleMarque = strlen(T[i].marque);
                if((T[i].marque[0] == 'A' || T[i].marque[0] == 'a') &&
                    T[i].marque[tailleMarque - 1] == 'e') {

                    // TOUT EST VALIDE ! On transfere.
                    Tc[Nc] = T[i];
                    Nc++;
                }
            }
        }
    }

    // 3. Affichage
    printf("\n==================================\n");
    printf("--- TABLEAU INITIAL (T) : %d telephone(s) ---\n", N);
    for(int i = 0; i < N; i++) {
        printf("- %s %s (%s) | Pays: %s | Date: %s | %.2f f\n",
            T[i].marque, T[i].modele, T[i].serie, T[i].pays, T[i].dateFab, T[i].prix);
    }

    printf("\n--- TABLEAU FILTRE (Tc) : %d telephone(s) ---\n", Nc);
    for(int i = 0; i < Nc; i++) {
        printf("- %s %s (%s) | Pays: %s | Date: %s | %.2f f\n",
            Tc[i].marque, Tc[i].modele, Tc[i].serie, Tc[i].pays, Tc[i].dateFab, Tc[i].prix);
    }

    return 0;
}
