#include <stdio.h>
int main()
{
    int a;
    printf("donner l'age: \n");
    scanf("%d",&a);
    (a>=0 && a<=17) ? printf("tu es mineur") : printf("tu es majeur");
    return 0;
}

