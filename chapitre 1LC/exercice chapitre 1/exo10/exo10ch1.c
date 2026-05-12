#include <stdio.h>
int main()
{
    int A,RM,M,RS,S,jour,J;
    printf("donner un nombre de jour: \n");
    scanf("%d",&J);
    A=J/365;
    RM=J%365;
    M=RM/30;
    RS=RM%30;
    S=RS/7;
    jour=RS%7;
    printf("%d = %d ans %d mois %d semaine %d jour ",J,A,M,S,jour);
    return 0;
}
