#include <stdio.h>
int main()
{
    int a;
    printf("entrer un nombre: \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d est paire",a);
    }
    if(a%2!=0){
        printf("%d est impaire",a);
    }
     return 0;
    }


