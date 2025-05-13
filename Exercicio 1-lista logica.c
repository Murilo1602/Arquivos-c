//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int numero;
    printf("informe um numero:\n"); //Pede um numero para verificar se é par ou inpar
    scanf("%d", &numero);
    if (numero % 2 == 0 )
    {
        printf("par:\n"); //Fala quando o numero é par
    }
    else 
    {
        printf("impar:\n"); //Fala quando o numero é inpar
    }
return 0;
}
