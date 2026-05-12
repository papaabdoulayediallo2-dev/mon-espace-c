#include <stdio.h>
int main()
{
    int i,n,s;
    s=0;
    do{
        printf("entrez un nombre positif: ");
        scanf("%d",&n);
    }while(n<0);
    for(i=1;i<n;i++){
        s=s+i;
        if(s==n){
            break;
        }
    }
    if(s==n){
        printf("%d est triangulaire",n);
    }else{
        printf("%d n'est pas triangulaire",n);
    }
    return 0;
}
