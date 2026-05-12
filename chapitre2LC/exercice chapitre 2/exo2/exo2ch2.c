#include <stdio.h>
int main()
{
    int a,b,c,g,m,p;
    printf("Entrer trois nombre: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        g=a;
        if(b>c){
            m=b;
            p=c;
        } else {
            m=c;
            p=b;
        }
    }else if (b>a && b>c){
        g=b;
         if(a>c){
            m=a;
            p=c;
        } else {
            m=c;
            p=a;
        }
    } else{
        g=c;
         if(b>a){
            m=b;
            p=a;
        } else {
            m=a;
            p=b;
        }
    }

    printf("le plus grand est %d \n",g);
    printf("le moyen est %d \n",m);
    printf("le plus petit est %d \n",p);
    return 0;
}
