#include <stdio.h>
int main()
{
    int i;
    int n;
    float moyenne;
    int s=0;
    do
    {
        printf("entrer le nombre de note a saisi");
        scanf("%d",&n);
    }
    while(n<=0);
    int t[n];
    for(i=1; i<=n; i++)
    {
        do
        {
            printf("entre le note");
            scanf("%d",&t[i]);
        }
        while(t[i]<0);
        s+=t[i];
    }
        moyenne=(float)s/n;
    printf("la moyenne des est %.2f",moyenne);
    for(i=1;i<=n;i++){
            if(t[i]>moyenne)
        printf("voici le note %d",t[i]);
    }
    return 0;
}
