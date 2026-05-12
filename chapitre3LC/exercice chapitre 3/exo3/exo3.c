#include <stdio.h>
int main()
{
    int n,i,f;
    do{
        printf("Entrer un nombre positif \n");
        scanf("%d",&n);
    }while(n<0);
    f=1;
    if(n>0){
        for(i=1;i<=n;i++){
       f=f*i;
       printf("%d \n",f);
    }
    }
    if(n==0){
        printf("0!=1");
    }
    return 0;
}
