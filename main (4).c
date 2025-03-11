//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
   int n1, n2;
   printf("informe n1:\n");
   scanf("%d", &n1);
   printf("informe n2:\n");
   scanf("%d", &n2);
   if (n1 > n2)
   {
       printf("n1 é o maior:\n");
   }
   else if (n1 == n2)
   {
       printf("eles são iguais:\n");
   }
   else 
   {
       printf("n2 é o maior:\n");
   }
return 0;
}