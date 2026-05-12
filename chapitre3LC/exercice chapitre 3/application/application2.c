#include <stdio.h>
int main()
{
    int i,a;

    do{
      printf("Veuiller saisir votre age \n");
    scanf("%d",&a);
    if(a<0){
        puts("age invalide veuiller resaisir");
    }
    else{
        if(a>=18){
            puts("vous etes majeur");
        }
        else{
            puts("vous etes mineur");
        }
    }
    }
    while(a<0);

    return 0;
}
