#include <stdio.h>
int main()
{
 int a, b, permu;
    printf("veuillez entre deux entiers: \n");
    scanf("%d %d",&a,&b);
    printf("avant permutation a=%d , b=%d \n",a,b);
    permu=a;
    a=b;
    b=permu;
    printf("Apres permutation a=%d , b=%d",a,b);
    return 0;
}
