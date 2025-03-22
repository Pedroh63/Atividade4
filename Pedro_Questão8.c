#include <stdio.h>

int main ()
{
    int ano;
    
    printf("Indique o ano de interesse com 4 números: \n");
    scanf("%d", &ano);
    
    if (ano <= 0)
    {
    printf("Erro! O valor deve ser superior a 0.\n");
    return 0;
    }
    
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("O ano é bissexto.");
    }
    else
    {
        printf("O ano não é bissexto.");
    }
    
    return 0;
}