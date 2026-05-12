#include <stdio.h>
int main()
{
    int n,i,s,m;
    do{
        printf("Entrer un nombre");
        scanf("%d",&n);
    }while(n<=0);
    s=1;
    for(i=1;i<=10;i++){
        s=n*i;
        printf("%d*%d=%d \n",n,i,s);
    }
    return 0;
}
