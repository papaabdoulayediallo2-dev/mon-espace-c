#include <stdio.h>
int main()
{
    int a;
    printf("donner un nombre: \n");
    scanf("%d",&a);
    if (a>0){printf("%d est positif",a);}
        else{printf("%d est negatif",a);}
    return 0;
}
