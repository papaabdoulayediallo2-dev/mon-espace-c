#include <stdio.h>
int main()
{
    float moyenne;
    do{
            printf("Moyenne: \n");
            scanf("%f",&moyenne);
        }while(moyenne<0 || moyenne>20);
    return 0;
}
