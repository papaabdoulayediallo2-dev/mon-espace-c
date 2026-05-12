#include <stdio.h>
int main()
{
    int N,M,i,s,cpt,cpti;
    float moy;
    do{
        printf("entre des entier positif entre 0 pour arreter");
            scanf("%d",&N);
            if(N==0){
                printf("invalide");
            }
    }while(N>0);
    for(i=1;i<=N;i++){
        do{
            printf("veuillez entrez les entier");
            scanf("%d",&M);
        }while(M<0);
        if(M%2==0){
            s+=M;
            cpt++;
        }else{
            cpti++;
        }
        }
    }
    moy=s/cpt;
    printf("la moyenne des entiers paires sont : %f",moy);
    printf("les nombres entier impaires sont :%d",cpti);
    return 0;
}
