#include <stdio.h>
int main()
{
    int n,i,cpt;
    do{
        printf("Entrer un nombre positif");
        scanf("%d",&n);
    }while(n<0);
    cpt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cpt++;
        }
    }
    if(cpt==2){
        printf("%d est premier",n);
    }else{
        printf("%d n'est pas premier",n);
    }
    return 0;
}
