#include <stdio.h>
int main()
{
    float P,BMI,PI,T;
    char sexe;
    printf("Entre votre sexe M pour masculin ou F pour feminin: \n");
    scanf("%c",&sexe);
    printf("veuiller saisir votre taille en cm: \n");
    scanf("%f",&T);
    printf("veuiller saisir votre poids en kg: \n");
    scanf("%f",&P);
    switch(sexe){
    case 'M':
        PI = (T-100)-(T-150)/4;
        printf("votre poiids ideal est: %d \n",PI);
        break;
    case 'F':
        PI = (T-100)-(T-120)/4;
        printf("votre poids ideal est: %d \n",PI);
        break;;
    default: printf("veuiller entre M pour masculin ou F pour feminin pour savoir votre poids ideal \n");
    }
    BMI=P/(T*T);
    if(BMI>=0 && BMI<=27){
        printf("vous etes normal \n");
    }
    else if(BMI>27 && BMI<32){
        printf("vous etes Obese \n");
    }
    else{
        printf("vous etes Malades \n");
    }
    return 0;
}
