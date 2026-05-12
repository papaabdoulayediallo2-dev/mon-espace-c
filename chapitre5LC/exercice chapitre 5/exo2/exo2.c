#include <stdio.h>
int main ()
{

    int n,s,i;
    float moyenne;
    do{
        printf("entre le nombre de note");
        scanf("%d",&n);
        s=0;
    }while(n<=0);
    int t[n];
    for(i=1;i<=n;i++){
        do {
            printf("entre le note");
            scanf("%d",&t[i]);
        }while(t[i]<0);
        s+=t[i];
    }
    for(i=1;i<=n;i++){
        printf("voici le note %d",t[i]);
    }
    moyenne=(float)s/n;
    printf("la moyenne des est %.2f",moyenne);
    return 0;
}
