#include <stdio.h>
struct ETUDIANT
{
    char nom[10];
    char prenom[10];
    float moyenne;
    int age;
};

int main(){
    int i,n;
    do
    {
       printf("nombre d'etudiant ");
        scanf("%d",&n);
    }while(n<=0);
    struct ETUDIANT t[n];
    for (i=0;i<n ;i++ )
    {
        printf("nom:");
        scanf("%s",t[i].nom);
         printf("prenom:");
        scanf("%s",t[i].prenom);
        do
        {
            printf("age:");
            scanf("%d",&t[i].age);
        }while(t[i].age<=0);
         do
        {
            printf("age:");
            scanf("%f",&t[i].moyenne);
        }while(t[i].moyenne<=0);
    }
    puts("prenom\t nom\t age\t moyenne\t");
    puts("**************************************");
    for (i=0;i<n;i++)
    {
        printf("%s \t %s \t %d \t %f ",t[i].prenom,t[i].nom,t[i].age,t[i].moyenne);
    }
return 0;
}
