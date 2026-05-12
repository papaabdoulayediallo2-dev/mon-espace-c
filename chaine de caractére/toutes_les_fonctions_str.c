#include <stdio.h>
#include <string.h>
#include <errno.h> // Pour strerror

/*
===================================================================================================
          BIBLIOTHÈQUE DE RÉFÉRENCE : FONCTIONS STANDARDS <string.h>
===================================================================================================
Toutes ces fonctions sont les standards du langage C.
RÈGLES D'OR :
1. Une chaîne se finit TOUJOURS par '\0'.
2. Toujours prévoir une taille de tableau suffisante (Taille texte + 1).
===================================================================================================
*/

int main() {
    
    // --------------------------------------------------------------------------------------------
    // 1. STRLEN (String Length)
    // Définition : Calcule la longueur d'une chaîne de caractères (sans le caractère de fin).
    // Syntaxe   : size_t strlen(const char *s);
    // Rôle      : Compter le nombre de caractères réels.
    // --------------------------------------------------------------------------------------------
    char ch1[] = "Etudiant";
    int n = strlen(ch1); // n = 8
    /* EXPLICATION : Parcourt la chaîne et compte tout SAUF le '\0' final. */


    // --------------------------------------------------------------------------------------------
    // 2. STRCPY & STRNCPY (String Copy)
    // Définition : Copie une chaîne source (y compris le '\0') dans une destination.
    // Syntaxe   : char *strcpy(char *dest, const char *src);
    //             char *strncpy(char *dest, const char *src, size_t n);
    // Rôle      : Copier tout ou une partie d'une chaîne dans une autre variable.
    // --------------------------------------------------------------------------------------------
    char src[] = "C'est facile";
    char dest[30];
    strcpy(dest, src);
    
    char dest_n[10];
    strncpy(dest_n, src, 5);
    dest_n[5] = '\0'; // TRÈS IMPORTANT avec strncpy
    /* EXPLICATION : strcpy copie TOUT. strncpy copie seulement N caractères (plus sécurisé). */


    // --------------------------------------------------------------------------------------------
    // 3. STRCAT & STRNCAT (String Concatenation)
    // Définition : Ajoute une chaîne à la fin d'une autre chaîne (concaténation).
    // Syntaxe   : char *strcat(char *dest, const char *src);
    //             char *strncat(char *dest, const char *src, size_t n);
    // Rôle      : Coller/Ajouter une chaîne après une autre.
    // --------------------------------------------------------------------------------------------
    char debut[30] = "Bon";
    strcat(debut, "jour"); // devient "Bonjour"
    
    char base[30] = "Resultat: ";
    strncat(base, "12345", 3); // devient "Resultat: 123"
    /* EXPLICATION : strcat ajoute à la fin. strncat limite le nombre de caractères ajoutés. */


    // --------------------------------------------------------------------------------------------
    // 4. STRCMP, STRNCMP, STRCASECMP (Comparison)
    // Définition : Compare deux chaînes de caractères selon l'ordre ASCII.
    // Syntaxe   : int strcmp(const char *s1, const char *s2);
    //             int strcasecmp(const char *s1, const char *s2);
    // Rôle      : Vérifier si deux mots sont identiques ou l'un est plus grand que l'autre.
    // --------------------------------------------------------------------------------------------
    if (strcmp("Pomme", "Poire") != 0) {
        // Elles sont différentes
    }
    if (strncmp("Test1", "Test2", 4) == 0) {
        // Les 4 premières lettres sont identiques ("Test")
    }
    
    // STRCASECMP : Comparaison INSENSIBLE à la casse (majuscules/minuscules)
    if (strcasecmp("Chat", "CHAT") == 0) {
        // C'est VRAI (alors que strcmp aurait dit FAUX)
    }

    // STRNCASECMP : Comparaison INSENSIBLE sur les N premiers caractères
    if (strncasecmp("Bonjour", "BONSOIR", 3) == 0) {
        // C'est VRAI car "Bon" == "BON"
    }
    /* EXPLICATION : strcmp est sensible à la casse. strcasecmp l'ignore. */


    // --------------------------------------------------------------------------------------------
    // 5. STRCHR & STRRCHR (Character Search)
    // Définition : Cherche la première ou la dernière occurrence d'un caractère dans une chaîne.
    // Syntaxe   : char *strchr(const char *s, int c);
    //             char *strrchr(const char *s, int c);
    // Rôle      : Trouver la position d'une lettre dans un mot.
    // --------------------------------------------------------------------------------------------
    char mot[] = "Programmation";
    if (strchr(mot, 'a') != NULL) {
        // 'a' trouvé (depuis le début)
    }
    if (strrchr(mot, 'o') != NULL) {
        // 'o' trouvé (depuis la fin)
    }
    /* EXPLICATION : Renvoie un pointeur vers l'élément trouvé, ou NULL si absent. */


    // --------------------------------------------------------------------------------------------
    // 6. STRSTR (String in String)
    // Définition : Cherche la première occurrence d'une sous-chaîne dans une chaîne cible.
    // Syntaxe   : char *strstr(const char *meule, const char *aiguille);
    // Rôle      : Chercher tout un mot dans une longue phrase.
    // --------------------------------------------------------------------------------------------
    char phrase[] = "Le secret est ici";
    if (strstr(phrase, "secret") != NULL) {
        // Mot "secret" trouvé !
    }
    /* EXPLICATION : Renvoie NULL si le mot n'existe pas dans la phrase. */


    // --------------------------------------------------------------------------------------------
    // 7. STRSPN & STRCSPN (Span & Complement Span)
    // Définition : Calcule la longueur du segment initial contenant (ou pas) certains caractères.
    // Syntaxe   : size_t strspn(const char *s, const char *accept);
    //             size_t strcspn(const char *s, const char *reject);
    // Rôle      : Analyser des groupes de caractères autorisés ou interdits au début.
    // --------------------------------------------------------------------------------------------
    char plaque[] = "ABC12345";
    int nLettres = strspn(plaque, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"); // 3 (car A, B, C)
    
    char tag[] = "user#123";
    int posHashtag = strcspn(tag, "#"); // 4 (car le # est à l'index 4)
    /* EXPLICATION : strspn compte les autorisés. strcspn cherche le premier interdit. */


    // --------------------------------------------------------------------------------------------
    // 8. STRPBRK (String Point Break)
    // Définition : Recherche dans une chaîne l'une des occurrences d'un ensemble de caractères.
    // Syntaxe   : char *strpbrk(const char *s, const char *accept);
    // Rôle      : Trouve la première fois qu'un des caractères de la liste apparaît.
    // --------------------------------------------------------------------------------------------
    char texte[] = "Il y a un chiffre 5 ici";
    if (strpbrk(texte, "0123456789") != NULL) {
        // On a trouvé un des chiffres
    }


    // --------------------------------------------------------------------------------------------
    // 9. STRCOLL & STRXFRM (Locale Specific)
    // Définition : Comparaison ou transformation de chaînes selon les règles de la langue locale.
    // Syntaxe   : int strcoll(const char *s1, const char *s2);
    //             size_t strxfrm(char *dest, const char *src, size_t n);
    // Rôle      : Gérer correctement les accents et les tris selon le pays.
    // --------------------------------------------------------------------------------------------
    char s1[] = "Eté";
    char s2[] = "Ete";
    if (strcoll(s1, s2) > 0) {
        // strcoll comprend que 'é' vient après 'e' selon la langue
    }
    
    char dest_xfrm[20];
    strxfrm(dest_xfrm, "Exemple", 10); 
    /* EXPLICATION : strcoll est plus précis que strcmp pour les caractères spéciaux. */


    // --------------------------------------------------------------------------------------------
    // 10. STRERROR (Error Message)
    // Définition : Traduit un numéro d'erreur (errno) en un message texte lisible.
    // Syntaxe   : char *strerror(int errnum);
    // Rôle      : Comprendre ce qui a échoué dans le système (ex: fichier absent).
    // --------------------------------------------------------------------------------------------
    char *message_erreur = strerror(2); 
    // printf("L'erreur 2 veut dire : %s\n", message_erreur); 
    // Affiche "No such file or directory"


    // --------------------------------------------------------------------------------------------
    // 11. STRTOK (String Tokenize)
    // Définition : Divise une chaîne en une suite de jetons (tokens) selon un délimiteur.
    // Syntaxe   : char *strtok(char *s, const char *delim);
    // Rôle      : Découper une chaîne par des séparateurs (comme des points-virgules).
    // --------------------------------------------------------------------------------------------
    char mon_texte[] = "Jean;Vito;25";
    char *morceau = strtok(mon_texte, ";");
    while (morceau != NULL) {
        // printf("Morceau trouve : %s\n", morceau);
        morceau = strtok(NULL, ";");
    }
    /* EXPLICATION : Elle modifie physiquement la chaîne en y insérant des '\0'. */


    // --------------------------------------------------------------------------------------------
    // 12. STRUPR & STRLWR (Modification de Casse)
    // Définition : Convertit tout un texte pour le mettre en majuscules ou en minuscules.
    // Syntaxe   : char *strupr(char *s); / char *strlwr(char *s);
    // Rôle      : Transformer rapidement la casse du texte.
    // --------------------------------------------------------------------------------------------
    char texte_en_bas[] = "bonjour";
    strupr(texte_en_bas); // devient "BONJOUR"
    
    char texte_en_haut[] = "HELLO";
    strlwr(texte_en_haut); // devient "hello"
    /* EXPLICATION : Ces fonctions modifient directement le contenu de la variable originale. */


    // --------------------------------------------------------------------------------------------
    // 13. SPRINTF & SSCANF (stdio.h)
    // Définition : Fonctions d'entrées/sorties formatées travaillant sur des chaînes.
    // Syntaxe   : int sprintf(char *s, const char *format, ...);
    //             int sscanf(const char *s, const char *format, ...);
    // Rôle      : Construire ou décortiquer du texte complexe (E/S formatées).
    // --------------------------------------------------------------------------------------------
    char buffer[50];
    sprintf(buffer, "Score: %d", 100); // buffer contient "Score: 100"
    
    char date[] = "25 12 2024";
    int j, m, a;
    sscanf(date, "%d %d %d", &j, &m, &a); // Extrait les 3 nombres
    /* EXPLICATION : sprintf "écrit" dans une chaîne, sscanf "lit" dans une chaîne. */

    printf("Fichier de reference finalise avec Definitions et Syntaxes.\n");
    return 0;
}
