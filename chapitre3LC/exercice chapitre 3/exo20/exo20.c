#include <stdio.h>
int main()
{
    int n,j,i,s;
    do
    {
        printf("entre un entier positif, pair, divisible par 4 et multiple de 10:");
        scanf("%d",&n);
        if(n<=0 || n%2!=0 || n%4!=0 || n%10!=0)
        {
            printf("error \n");
        }
    }while(n<=0 || n%2!=0 || n%4!=0 || n%10!=0);

    for(i=1; i<n; i++)
    {
        s=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        if(s==i)
        {
            printf("%d est parfait \n",i);
        }
    }
    return 0;
}
