#include <stdio.h>
#include <string.h>
//Saisir un verbe du 1er groupe. Le conjuguer au présent de l’indicatif et au passé composé (avec auxiliaire avoir).
int main() {
    char verbe[50], radical[50];
    printf("Entrez un verbe du 1er groupe : ");
    scanf("%s", verbe);
    
    int len = strlen(verbe);
    if(len < 2 || verbe[len-2] != 'e' || verbe[len-1] != 'r') {
        printf("Ce n'est pas un verbe du 1er groupe !\n");
        return 1;
    }
    
    // Extraire le radical
    strcpy(radical, verbe);
    radical[len-2] = '\0'; // Coupe le "er"
    
    printf("\n--- PRESENT ---\n");
    printf("Je %se\n", radical);
    printf("Tu %ses\n", radical);
    printf("Il/Elle %se\n", radical);
    printf("Nous %sons\n", radical);
    printf("Vous %sez\n", radical);
    printf("Ils/Elles %sent\n", radical);
    
    printf("\n--- PASSE COMPOSE ---\n");
    // Petit truc pour j' ou je
    char pronom[5] = "Je";
    if(strchr("aeiouyAEIOUY", verbe[0])) strcpy(pronom, "J'"); 
    else strcpy(pronom, "J'ai "); // Simplification
    
    printf("J'ai %sé\n", radical);
    printf("Tu as %sé\n", radical);
    printf("Il/Elle a %sé\n", radical);
    printf("Nous avons %sé\n", radical);
    printf("Vous avez %sé\n", radical);
    printf("Ils/Elles ont %sé\n", radical);

    return 0;
}