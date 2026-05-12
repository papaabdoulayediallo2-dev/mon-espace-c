#include <stdio.h>
int main()
{
    int J,M,A;
    printf("veuillez saisir un date en jj mm aa: \n");
    printf("Entre le jour:\n");
    scanf("%d",&J);
    printf("Entre le mois: \n");
    scanf("%d",&M);
    printf("Entre l'annee: \n");
    scanf("%d",&A);
    if((A>0)&&(M>0 && M<=12) && (J>0 && J<=31)){
        if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12){
            if(J<=31){
                 printf("Date valide \n");
            }
            else{
                printf("Date invalide \n");
            }

        }
        else if(M==4 || M==6 || M==9 || M==11){
             if(J<=30){
                 printf("Date valide \n");
            }
            else{
                printf("Date invalide \n");
            }
        }
        else{
            if((A%4==0 && A%100!=0) || (A%400==0)){
                if(J<=29){
                 printf("Date valide \n");
            }
                else{
                 printf("Date invalide \n");
            }
            }
            else{
                if(J<=28){
                 printf("Date valide \n");
            }
                else{
                 printf("Date invalide \n");
            }
            }
        }
        }
        else{
            printf("Date invalide\n");
        }
    return 0;
}
