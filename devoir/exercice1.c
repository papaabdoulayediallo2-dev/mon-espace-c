#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nom[50];
    char prenom[50];
    char matricule[50];
    char pays[50];
    char quartier[50];
    char dateNaiss[20];
    float moyenne;
} Etudiant;

int main()
{
    int k;
    printf("Combien d'etudiants ? ");
    scanf("%d", &k);
    getchar(); // Vider le buffer

    int countSn = 0, countFaNe = 0, countGuediawaye = 0;
    float sommeFaNe = 0;
    Etudiant meilleur;
    int premier = 1;

    for(int i=0; i<k; i++)
    {
        Etudiant e;
        printf("\n--- Etudiant %d ---\n", i+1);

        printf("Nom : ");
        fgets(e.nom, 50, stdin);
        e.nom[strcspn(e.nom, "\n")] = 0;
        printf("Prenom : ");
        fgets(e.prenom, 50, stdin);
        e.prenom[strcspn(e.prenom, "\n")] = 0;
        printf("Pays : ");
        fgets(e.pays, 50, stdin);
        e.pays[strcspn(e.pays, "\n")] = 0;
        printf("Quartier : ");
        fgets(e.quartier, 50, stdin);
        e.quartier[strcspn(e.quartier, "\n")] = 0;
        printf("Date de naissance (JJ/MM/AAAA) : ");
        fgets(e.dateNaiss, 20, stdin);
        e.dateNaiss[strcspn(e.dateNaiss, "\n")] = 0;
        printf("Moyenne : ");
        scanf("%f", &e.moyenne);
        getchar();

        // 1. Sénégalais
        if(strcasecmp(e.pays, "Senegal") == 0) countSn++;

        // 2. Nom commence par FA et prénom finit par NE
        int lenP = strlen(e.prenom);
        if(strncmp(e.nom, "FA", 2) == 0 && lenP >= 2 && e.prenom[lenP-2] == 'N' && e.prenom[lenP-1] == 'E')
        {
            sommeFaNe += e.moyenne;
            countFaNe++;
        }

        // 3. Taille nom > taille prénom
        if(strlen(e.nom) > strlen(e.prenom))
        {
            printf(">> %s %s a un nom plus long que son prenom.\n", e.prenom, e.nom);
        }

        // 4. Résident à Guédiawaye
        if(strcasecmp(e.quartier, "Guediawaye") == 0) countGuediawaye++;

        // 5. Meilleure moyenne
        if(premier || e.moyenne > meilleur.moyenne)
        {
            meilleur = e;
            premier = 0;
        }

        // 6. Générer Matricule
        int jour, mois, annee;
        sscanf(e.dateNaiss, "%d/%d/%d", &jour, &mois, &annee);
        int age = 2026 - annee; // Supposons l'année courante 2026

        char debutNom[3] = {0};
        char debutPrenom[4] = {0};
        strncpy(debutNom, e.nom, 2);
        strncpy(debutPrenom, e.prenom, 3);

        sprintf(e.matricule, "%s%s%d%.0f@##", debutNom, debutPrenom, age, e.moyenne);
        printf("Matricule genere : %s\n", e.matricule);
    }

    printf("\n=== RESULTATS ===\n");
    printf("1. Senegalais : %d\n", countSn);
    if(countFaNe > 0) printf("2. Moyenne FA...NE : %.2f\n", sommeFaNe / countFaNe);
    if(k > 0) printf("4. %% Guediawaye : %.2f%%\n", (countGuediawaye * 100.0) / k);
    if(!premier) printf("5. Meilleur : %s %s (%.2f)\n", meilleur.prenom, meilleur.nom, meilleur.moyenne);

    return 0;
}
