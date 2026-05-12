#include <stdio.h>
int main()
{
int n;
printf("Entrer un chiffre: \n");
scanf ("%d",&n);
switch(n){
 case 0 :
 printf("ZERO");
 break;
case 1 :
 printf("UN");
 break;
case 2 :
 printf("DEUX");
 break;
case 3 :
 printf("TROIS");
 break;
case 4 :
 printf("QUATRE");
 break;
case 5 :
 printf("CINQ");
 break;
case 6 :
 printf("SIX");
 break;
case 7 :
 printf("SEPT");
 break;
case 8 :
 printf("HUIT");
 break;
case 9 :
 printf("NEUF");
 break;
 default : printf ("Veuillez entrer un chiffre (0;1;2;3;4;5;6;7;8;9)");
}
return 0;
}
