
#include <stdio.h>

int main()
{
    int n1,n2,n3;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);
    
    if (n1 <= 0 || n2 <= 0 || n3 <=0)
    {
        printf("Os valores não correspondem às medidas dos lados de um triângulo!");
    }
    
    if (n1 == n2 && n2 == n3)
    {
        printf("Os valores correspondem aos lados de um triângulo equilátero.");
    }
    if (n1 == n2 && n1 != n3 || n1 == n3 && n1 != n2 || n2 == n3 && n2 != n1)
    {
        printf("Os valores correspondem aos lados de um triângulo isóceles.");    
    }
    if (n1 != n2 && n2 != n3 && n1 != n3)
    {
        printf("Os valores correspondem aos lados de um triângulo escaleno.");    
    }    
     
    return 0;
}
