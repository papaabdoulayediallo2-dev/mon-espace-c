#include <stdio.h>

int main()
{
    int a,R,C,V;
    printf("entrer un entier: \n");
    scanf("%d",&a);
    R=sqrt(a);
    printf("la racine carre de %d est %d \n",a,R);
    C=a*a;
    printf("le carre de %d est %d \n",a,C);
    V=abs(a);
    printf("la valeur absolue de %d est %d \n",a,V);
    return 0;
}
