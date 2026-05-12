#include  <stdio.h>
int main()
{
float a;
printf ("entrer votre moyenne: \n");
scanf("%f",&a);
if(a>=0 && a<10){
printf("vous êtes recalé \n");}
else if (a>=10 && a<12){
printf("vous avez la mention passable \n ");
}
else if (a>=12 && a<14){
printf("vous avez la mention assez bien\n");
}
else if (a>=14 && a<16){
printf("vous avez la mention bien \n ");
}
else if (a>=16 && a<=20){
printf("vous avez la mention très bien\n ");
}
else {
printf (" Veuillez entre un moyenne compris entre 0 et 20 ");}
return 0;
}
