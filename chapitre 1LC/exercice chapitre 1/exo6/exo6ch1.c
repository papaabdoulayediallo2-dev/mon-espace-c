#include <stdio.h>

int main()
{
    float n1,n2,n3,m1,m2,m3,mt;
    int c1,c2,c3;

    printf("entrer la 1ere note : \n");;
    scanf("%f",&n1);
    printf("entrer le coefficient correspondant: \n");
    scanf("%d",&c1);
    printf("entrer la 2eme note : \n");
    scanf("%f",&n2);
    printf("entrer le coefficient correspondant: \n");
    scanf("%d",&c2);
    printf("entrer la 3eme note : \n");
    scanf("%f",&n3);
    printf("entrer le coefficient correspondant: \n");
    scanf("%d",&c3);
    m1=n1*c1;
    m2=n2*c2;
    m3=n3*c3;
    mt=(m1+m2+m3)/(c1+c2+c3);
    printf("la moyenne est : %.2f \n",mt);
    return 0;


}
