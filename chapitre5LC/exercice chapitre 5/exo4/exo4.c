#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    int positif=0,negatif=0;
    do{
        printf("Entrez le nombre de valeurs (N) : ");
        scanf("%d", &n);
    }while(n<=0);
    int t[n];
    for(i=1;i<=n;i++){
        t[i]=rand();
    }
    printf("\nles valeur saisie sont: \n");
    for(i=1;i<=n;i++){
        printf("t[%d] = %d \n",i,t[i]);
        if(t[i]>0){
            positif++;
        }else if (t[i]<0){
            negatif++;
        }
    }
    printf("\nNombre de valeurs positives : %d\n", positif);
    printf("Nombre de valeurs negatives : %d\n", negatif);
    return 0;
}
