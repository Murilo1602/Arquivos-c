//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    char operador; 
    float num1, num2, resultado;
    printf("digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("digite o segundo numero:\n");
    scanf("%f", &num2);
    printf("digite algum operador(+, -, *, /): \n");
    scanf(" %c", &operador);
    
    switch(operador){ 

        case '+':
        resultado = num1 + num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '-':
        resultado = num1 - num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '*':
        resultado = num1 * num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        case '/':
        resultado = num1 / num2;
        printf("Resultado: %.2lf\n", resultado); 
        break; 

        default: 
        printf("Operador Invalido! tente novamente com os operadores validos"); 
        return 1;
    } 
    
    return 0;
    
}
    
    
    
    