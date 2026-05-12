#include <stdio.h>
int main()
{
    int n,i,s;
    do{
        printf("Entre un nombre positif: ");
        scanf("%d",&n);
    }while(n<0);
    s=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        printf("%d est parfait",n);
    }else{
        printf("%d n'est pas parfait",n);
    }
    return 0;
}
