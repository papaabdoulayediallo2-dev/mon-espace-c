#include <stdio.h>
int main()
{
int a;
printf("Entrer age \n");
scanf("%d",&a);
if(a==6 || a==7){
printf("poussin");
}
else if(a==8 || a==9){
printf("pupille");
}
else if(a==10 || a==11){
printf("Minime");
}
else if(a==12 && a<=17){
printf("cadet");
}
else if(a>17){
printf ("Adult");
}
else{
printf("catégorie non définie");
}
return 0;
}
