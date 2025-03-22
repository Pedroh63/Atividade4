
#include <stdio.h>

int main()
{
    int n1,n2;
    
    printf("Indique o primeiro número");
    scanf("%f", &n1);
    
    printf("Indique o segundo número");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("O primeiro valor é maior que o segundo");    
    }
    else if (n1 == n2)
    {
        printf("Os valores são iguais");    
    }
    else
    
    printf("O segundo valor é maior do que o primeiro");
}
