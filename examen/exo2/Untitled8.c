#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = '\n';

    if (iscntrl(c))
    {
        printf("C'est un caractere de controle");
    }
    else
    {
        printf("Ce n'est pas un caractere de controle");
    }

    return 0;
}
