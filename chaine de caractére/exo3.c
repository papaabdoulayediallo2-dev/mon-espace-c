#include <stdio.h>
#include <string.h>
struct Etudiant {
    char nom[50];
    char prenom[50];
    char pays[50];
    char quartier[50];
    char date_naissance[50];
    int age;
    float moyenne;
    char matricule[100];
}e;

int main() {
    int k, i;

    printf("Donner le nombre d'etudiants : ");
    scanf("%d", &k);


    int nb_senegalais = 0;
    int nb_fa_ne = 0;
    float somme_fa_ne = 0;
    int nb_guediawaye = 0;

    float max_moyenne = -1;
    char best_nom[50], best_prenom[50];

    for(i = 0; i < k; i++) {
        printf("\n Etudiant %d \n", i+1);

        printf("Nom : ");
        scanf("%s", e.nom);

        printf("Prenom : ");
        scanf("%s", e.prenom);

        printf("Pays : ");
        scanf("%s", e.pays);

        printf("Quartier : ");
        scanf("%s", e.quartier);

        printf("Date de naissance : ");
        scanf("%s", e.date_naissance);

        printf("Age : ");
        scanf("%d", &e.age);

        printf("Moyenne : ");
        scanf("%f", &e.moyenne);

        if(strcmp(e.pays, "Senegal") == 0) {
            nb_senegalais++;
        }

        if(strncmp(e.nom, "FA", 2) == 0 &&
           strcmp(e.prenom + strlen(e.prenom) - 2, "NE") == 0) {
            somme_fa_ne += e.moyenne;
            nb_fa_ne++;
        }


        if(strlen(e.nom) > strlen(e.prenom)) {
            printf("Nom plus long : %s %s\n", e.nom, e.prenom);
        }


        if(strcmp(e.quartier, "Guediawaye") == 0) {
            nb_guediawaye++;
        }


        if(e.moyenne > max_moyenne) {
            max_moyenne = e.moyenne;
            strcpy(best_nom, e.nom);
            strcpy(best_prenom, e.prenom);
        }


        sprintf(e.matricule, "%.2s%.3s%d%.0f@##",
                e.nom, e.prenom, e.age, e.moyenne);

        printf("Matricule : %s\n", e.matricule);
    }


    printf("\n RESULTATS \n");

    printf("Nombre d'etudiants senegalais : %d\n", nb_senegalais);

    if(nb_fa_ne > 0)
        printf("Moyenne FA...NE : %.2f\n", somme_fa_ne / nb_fa_ne);
    else
        printf("Aucun etudiant FA...NE\n");

    printf("Pourcentage Guediawaye : %.2f%%\n",
           (nb_guediawaye * 100.0) / k);

    printf("Meilleur etudiant : %s %s (%.2f)\n",
           best_nom, best_prenom, max_moyenne);

    return 0;
}
