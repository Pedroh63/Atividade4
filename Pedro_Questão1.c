#include <stdio.h>

int main()
{
    float numero;
    
        printf("Digite um número: ");
        scanf("%f", &numero);
        
        if (numero == 0)
        {
        printf("O valor é neutro\n");
        }
        else if (numero > 0)
        {
            printf("O número é positivo");
        }
        else 
        {
            printf("O número é negativo");
        }
        
        
        
        
    return 0;
}
