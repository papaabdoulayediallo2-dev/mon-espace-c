#include <stdio.h>
int main()
{
    int i,n,s,p;
    p=1;
    s=0;
    do{
        printf("Entrez un nombre positif: \t");
        scanf("%d",&n);
    }while(n<0);
    for(i=1;i<=n;i++){
        if(i%3==0){
            s=s+i;
        }
        if(i%5==0 && i%2==0){
            p=p*i;
        }
    }
    printf("La somme des nombre diviseurs par 3 compris entre 1 et %d est : %d \n",n,s);
    printf("Le produit des nombres pairs et divisible par 5 compris en 1 et %d est : %d",n,p);
    return 0;
}
