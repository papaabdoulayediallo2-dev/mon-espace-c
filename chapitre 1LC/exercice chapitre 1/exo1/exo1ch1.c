#include <stdio.h>

int main()
{
    int a,b,S,D,P,K,R;
    float Q;
    printf("Veuillez entrer deux entier: \n");
    scanf("%d %d",&a,&b);
    S=a+b;
    printf("la somme de %d + %d = %d \n",a,b,S);
    D=a-b;
    printf ("la difference de %d - %d  = %d \n",a,b,D);
    P=a*b;
    printf("le produit de %d * %d  = %d \n",a,b,P);
    K=a/b;
    printf("le quotien entier de %d / %d  = %d \n",a,b,K);
    Q=(float)a/b;
    printf("le quotien reel de %d / %d  = %f \n",a,b,Q);
    R=a%b;
    printf("le reste de la division de %d / %d  = %d \n",a,b,R);
    return 0;
}
