#include <stdio.h>

int main()
{
    const float pi=3.14;
    float R,D,C,S;
    printf("Veuillez entrer le rayon du cercle: \n");
    scanf("%f",&R);
    D=2*R;
    printf("le diametre est: %f \n",D);
    C=2*R*pi;
    printf("la circonference est: %f \n",C);
    S=pi*R*R;
    printf("la surface est: %f \n",S);
    return 0;
}
