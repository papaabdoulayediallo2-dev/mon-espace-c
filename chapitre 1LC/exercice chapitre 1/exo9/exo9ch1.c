#include <stdio.h>
int main()
{
    int S,M,H,J,RS,RM,RH;
    printf("donner des second: \n");
    scanf("%d",&S);
     M=S/60;
     RS=S%60;
     H=M/60;
     RM=M%60;
     J=H/24;
     RH=H%24;
    printf("correspond %d jour %d heure %d minute %d second",J,RH,RM,RS);
    return 0;
}
