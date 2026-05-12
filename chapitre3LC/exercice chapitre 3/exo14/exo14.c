#include <stdio.h>
int main()
{
    int n,cpt1,cpt,i,j;

    cpt1=0;
    do{
        printf("Veuille entre un nombre positif: ");
        scanf("%d",&n);
    }while(n<=0);
    for (i=1;i<=n;i++){
            cpt=0;
        for (j=1;j<=i;j++){
            if(i%j==0){
                cpt++;
            }
        }
        if(cpt==2){
            cpt1++;
            printf("%d\n",i);
        }
    }
    printf("entre 1 et %d il y'a %d de nombre premier",n,cpt1);

    return 0;
}
