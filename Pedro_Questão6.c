
#include <stdio.h>

int main(void)
{
   int n1,n2,n3;
   
   printf("Indique o primeiro número: ");
   scanf("%d", &n1);
   printf("Indique o segundo número: ");
   scanf("%d", &n2);
   printf("Indique o terceiro número: ");
   scanf("%d", &n3);
   
   if (n1 > n2 && n1 > n3)
   {
       printf("O maior valor é %d", n1);
   }
   if (n2 > n1 && n2 > n3)
   {
       printf("O maior valor é %d", n2);
   }

   if (n3 > n1 && n3 > n2)
   {
    printf("O maior valor é %d", n3);   
   }
   return 0;

}