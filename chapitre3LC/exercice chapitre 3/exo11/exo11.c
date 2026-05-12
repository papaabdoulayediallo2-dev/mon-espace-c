#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,cpt1,i,cpt2,j1,j2;
    cpt1=0;
    cpt2=0;
    do{
        printf("Veuillez entrer deux nombre positif: ");
        scanf("%d %d",&n1,&n2);
    }while(n1<0 && n2<0);
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0){
            cpt1++;
        }
        if(n2%i==0){
            cpt2++;
        }

    }
    if(cpt1<=2 && cpt2<=2){
        if(abs(n1-n2)==2){
            printf("%d et %d sont premier jumeaux",n1,n2);
        }else{
            printf("%d et %d sont premier mais pas jumeaux",n1,n2);
        }
    }else{
        printf("%d et %d ne sont pas jumeaux",n1,n2);
    }
    return 0;
}
