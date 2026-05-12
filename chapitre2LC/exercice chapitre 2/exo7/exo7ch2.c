#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D,RD;
    float x1,x2,x3,x4;
    printf("donner les trois parametre A,B et C du polynome: \n");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b - 4*a*c;
    RD = sqrt(D);
    x1 = (-b - RD) / (2.0 * a);
    x2 = (-b + RD) / (2.0 * a);
    x3=(-b)/(2.0 * a);
    x4=(float)-c/b;
    if(a==0 && b==0 && c==0){
        printf("tout les reel sont solution");
    }
    else if(a==0 && b==0 && c!=0){
         printf("pas de solution");
    }
    else if(a==0 && b!=0 && c!=0){
        printf("la solution est: %.2f",x4);
    }
    else if(a==0 && b!=0 && c==0){
        printf("0 est solution");
    }
    else{
        if(D>0){
            printf("lequation a deux solution: %.2f et %.2f",x1,x2);
        }
        else if(D==0){
            printf("lequation a une solution double: %.2f",x3);
        }
        else{
            printf("pas de solution");
        }
    }
    return 0;
}
