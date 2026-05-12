#include <stdio.h>

int main()
{
    const float a=1.8;
    float C,F,K;
    printf("Donner la temperature en degre Celsius : ");
    scanf("%f",&C);
    F=a*C+32;
    printf("la temperature en degre Fahrenheit est : %f \n",F);
    K=C+273.15;
    printf("la temperature en degre Kelvin est : %f \n",K);
    return 0;
}
