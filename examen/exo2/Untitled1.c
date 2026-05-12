#include <stdio.h>
#include <string.h>
int main()
{
    char nom[10];
    scanf("%s",nom);
    for(int i=0;i<=strlen(nom);i++){
        printf("%c",nom[i]);
        puts("123");
        printf("%d",strlen(nom));
    }
}
