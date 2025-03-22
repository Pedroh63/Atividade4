
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade;
   
   printf("Informe sua idade: ");
   scanf("%d", &idade);
   
   if (idade < 18)
   {
       printf("O usuários não tem idade para ser eleitor.\n");
       exit(0);
   }
   else
   {
       printf("O usuário tem idade para ser eleitor.\n");
   }
   if (idade >= 18 && idade < 65)
   {
       printf("O usuário é um eleitor obrigatório.\n");
   }
   else
   {
       printf("O usuário é um eleitor facultativo.\n");
   }
   
    return 0;
}