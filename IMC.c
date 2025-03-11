//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    float peso, altura, imc;
    printf("informe o peso:\n");
    scanf("%f", &peso);
    printf("informe a altura:\n");
    scanf("%f", &altura);
   imc = peso / (altura * altura);
    if (imc < 18.5)
    {
        printf("O seu imc é %.2f e esta abaixo do peso:", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("O seu imc é %.2f e esta com o peso normal", imc);
    }
    else if (imc == 25 && imc == 29.9)
    {
        printf("O seu imc é %.2f e esta com sobrepeso:", imc);
    }
    else
    {
        printf("O seu imc é %.2f e esta com obesidade:", imc);
    }
return 0;
}
