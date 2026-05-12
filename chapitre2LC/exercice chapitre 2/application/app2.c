#include <stdio.h>
int main()
{
    int a;
    printf("donner l'age: \n");
    scanf("%d",&a);
    if(a<18){
        printf("tu es mineur \n");
    }
    else{
        printf("tu es majeur");
    }
    return 0;
}
