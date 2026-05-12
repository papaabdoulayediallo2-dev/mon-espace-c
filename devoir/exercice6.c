#include <stdio.h>
#include <string.h>
//Saisir une phrase et un mot. Déterminer le nombre d'apparitions du mot dans la phrase.
int main() {
    char phrase[200];
    char mot[50];
    
    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    
    printf("Mot a chercher : ");
    scanf("%s", mot);
    
    int occurences = 0;
    char *ptr = phrase;
    int lenMot = strlen(mot);
    
    // Tant qu'on trouve le mot dans le reste de la phrase
    while((ptr = strstr(ptr, mot)) != NULL) {
        occurences++;
        ptr += lenMot; // On avance le pointeur pour ne pas recompter le même !
    }
    
    printf("\nLe mot '%s' apparait %d fois.\n", mot, occurences);
    return 0;
}