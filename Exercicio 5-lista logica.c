//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    char operador; 
    float num1, num2, resultado;
    printf("digite o primeiro numero:\n"); //Esse printf serve para digitar um numero
    scanf("%f", &num1);
    printf("digite o segundo numero:\n"); //Esse printf serve para digitar um numero
    scanf("%f", &num2);
    printf("digite algum operador(+, -, *, /): \n"); //Esse printf serve para escolher algun operador
    scanf(" %c", &operador);
    
    switch(operador){ 

        case '+': //Esse case serve para que se a escolha for uma conta de +, ele vai somar
        resultado = num1 + num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '-': //Esse case serve para que se a escolha for uma conta de -, ele vai subtrair
        resultado = num1 - num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '*': //Esse case serve para que se a escolha for uma conta de *, ele vai multplicar
        resultado = num1 * num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '/': //Esse case serve para que se a escolha for uma conta de /, ele vai dividir
        resultado = num1 / num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        default: //Esse default serve para que se a escolha for um operador que nao tem no programa, ele vai indicar invalido
        printf("Operador Invalido! tente novamente com os operadores validos"); 
        return 1;
    } 
    
    return 0;
    
}
    
    
    
    
