//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int numero;
    printf("informe um numero:\n");
    scanf("%d", &numero);
    if (numero > 1)
    {
        printf("positivo:\n");
    }
    else if (numero == 0)
    {
        printf("zero:\n");
    }
    else if (numero < 0)
    {
        printf("negativo:\n");
    }
return 0;
}
