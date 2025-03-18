
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um número");
    scanf("%d", &numero);
  
      if (numero % 2 == 0)
    {
    printf("Seu número é par");
    }
      
      else 
    {
    printf("Seu número é ímpar");
    }
  
    return 0;
}