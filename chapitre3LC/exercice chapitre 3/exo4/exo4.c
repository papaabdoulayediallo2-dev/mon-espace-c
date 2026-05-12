#include <stdio.h>
int main()
{
    int n,i,s;
    s=0;
    do{
        printf("Entre un nombre positif: \t");
        scanf("%d",&n);
    }while(n<0);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            s=s+i;
        }
    }
    printf("%d \t",s);
}
