//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    float valor, valorfinal;
    printf("informe um valor:\n");
    scanf("%f", &valor);
    if (valor > 500)
    {
        valorfinal = valor - (valor * 0,10);
        printf ("O valor final da compra é: %.2f",valorfinal);//desconto de 10%
    }
    else if (valor <= 200)
    {
        valorfinal = valor - (valor * 0.05);
        printf ("O valor final da compra é: %.2f",valorfinal);//desconto de 5%
    }
    else 
    {
        valorfinal = valor;
        printf ("O valor final da compra é: %.2f",valorfinal);//sem desconto
    }
return 0;
}
