//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int numero;
    printf("informe um numero:\n");
    scanf("%d", &numero);
    if (numero % 2 == 0 )
    {
        printf("par:\n");
    }
    else 
    {
        printf("impar:\n");
    }
return 0;
}