#include <stdio.h>
#include <string.h>
//Saisir un verbe. Déterminer et afficher son groupe (1er si fini par 'er', 2ème si fini par 'ir', 3ème sinon).
int main() {
    char verbe[50];
    printf("Entrez un verbe : ");
    scanf("%s", verbe);
    
    int len = strlen(verbe);
    
    if(len >= 2) {
        if(verbe[len-2] == 'e' && verbe[len-1] == 'r') {
            printf("C'est un verbe du 1er groupe.\n");
        } else if(verbe[len-2] == 'i' && verbe[len-1] == 'r') {
            printf("C'est un verbe du 2eme groupe (ou 3eme s'il est irregulier).\n");
        } else {
            printf("C'est un verbe du 3eme groupe.\n");
        }
    } else {
        printf("Verbe trop court !\n");
    }
    return 0;
}