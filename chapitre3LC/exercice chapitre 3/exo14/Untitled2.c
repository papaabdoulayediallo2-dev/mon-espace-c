#include <stdio.h>
int main()
{
    int i,j,n,cpt,cpt1;
    do{
        printf("Entrer un nombre positif: ");
        scanf("%d",&n);
    }while(n<0);
    cpt1=0;
    for(i=1; i<=n; i++){
        cpt=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                cpt++;

            }
        }
        if(cpt==2){
            cpt1++;
            printf("%d \n",i);
        }
    }
    printf("le nombre de nombre de nombre premier compris entre 1 et %d est %d",n,cpt1);
    return 0;
}
