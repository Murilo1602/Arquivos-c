//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    int conversao;
    float valoremreal,dolar, euro, libra;

    printf("selecione tipo de conversao (1-3):\n"); 
    printf("1-dolar:\n"); 
    printf("2-euro:\n"); 
    printf("3-libra:\n"); 
    scanf("%d", &conversao); 

    switch(conversao){ 

        case 1:
        printf("digite o valor em real:\n"); 
        scanf("%f", &valoremreal);
        dolar = valoremreal / 5.84;
        printf("o valor em dolar é %.2f", dolar);
        break; 

        case 2:
        printf("digite o valor em real:\n"); 
        scanf("%f", &valoremreal);
        euro = valoremreal / 6.38;
        printf("o valor em euro é %.2f", euro);
        break; 

        case 3:
        printf("digite o valor em real:\n"); 
        scanf("%f", &valoremreal);
        libra = valoremreal / 7.55;
        printf("o valor em libra é %.2f", libra);
        break; 

        default: 

        printf("Opcao Invalida! Programa Encerrado"); 

        return 1;
    }
    return 0;
}

  
  
  
  
  
  
  
  
  
