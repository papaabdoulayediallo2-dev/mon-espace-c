#include <stdio.h>
int main ()
{
    int i;
    int t[10];
    for(i=1;i<=10;i++){
        printf("entre quelque chose");
        scanf("%d",&t[i]);
        }
     for(i=1;i<=10;i++){
        printf("%d \n",t[i]);
        }
    return 0;
}
