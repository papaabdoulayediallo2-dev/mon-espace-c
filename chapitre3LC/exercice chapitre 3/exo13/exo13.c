#include <stdio.h>
int main()
{
    int n,i,j,m;
    m=1;
    do{
        printf("Veuillez entrer un nombre positif: ");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            m=i*j;
            printf("%d * %d = %d \n",i,j,m);
        }
    }
    return 0;
}
