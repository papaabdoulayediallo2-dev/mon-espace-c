#include <stdio.h>
int main()
{
    int a,b,c;
    printf("donner trois nombre: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
        printf("la serie de trois nombres entrer est croissante \n");
    }else if (a>b && b>c){
        printf("la serie de trois nombres entrer est decroissante \n");
    }else{
        printf("la serie de trois nombres entrer est indeterminee \n");
    }
    return 0;
}
