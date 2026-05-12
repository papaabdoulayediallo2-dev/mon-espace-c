#include <stdio.h>
int main()
{
    int i,n,cpt;
    do{
        printf("veuillez entre un entier positif plus grand que 1: ");
        scanf("%d",&n);
    }while(n<=1);
    cpt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cpt++;
        }
    }
    if(cpt>2){
        printf("%d est composite",n);
    }else{
        printf("%d n'est pas composite",n);
    }
    return 0;
}
