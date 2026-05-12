#include <stdio.h>
int main()
{
    int a,b;
    printf ("donner a et b \n");
    scanf("%d %d",&a,&b);
    a++;
    --b;
    a=b-1;
    b++;
    ++a;
    a*=2;
    b/=3;
    b++;
    a-=1;
    a=a+1;
    printf ("les nouveau valeur de a et b %d %d",a,b);
    return 0;

}
