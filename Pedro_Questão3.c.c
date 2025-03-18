#include <stdio.h>

int main()
{ 
    int fruta;
    float valor;
    
    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &fruta);
    
    if (fruta < 12 )
    {
        valor = fruta * 1.95;
        printf("O custo da compra é de: %.2f", valor );
    }
    else 
    {
        valor = fruta * 2.30;
        printf("O custo da compra é de: %.2f", valor);
    }
}