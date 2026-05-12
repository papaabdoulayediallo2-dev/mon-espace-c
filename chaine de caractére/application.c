#include <stdio.h>
#include <string.h>
int main()
{
    char nom[]="N'soko emannuel lumueno";
    char prenom[200];
    printf("Entrez votre nom: ");
    //scanf("%s",&nom);
    //printf("%c",getchar());
    //gets(nom);
    //fgets(nom,10,stdin);
    strncpy(prenom,nom);
    //prenom="diop";
    printf("votre prenom est %s",prenom);
    return 0;
}
