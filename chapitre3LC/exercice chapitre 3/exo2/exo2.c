#include <stdio.h>
int main()
{
    int n,i;
    do{
        printf("entrer un nombre positif");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
    return 0;
}
