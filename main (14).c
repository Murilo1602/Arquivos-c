//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    int opcao; 
    float mes1, mes2, mes3, mes4, mes5, mes6, mes7, mes8, mes9, mes10, mes11, mes12;

    printf("selecione o mes(1-12):\n"); 
    printf("1-janeiro:\n"); 
    printf("2-fevereiro:\n"); 
    printf("3-marco:\n"); 
    printf("4-abril:\n"); 
    printf("5-maio:\n"); 
    printf("6-junho:\n"); 
    printf("7-julho:\n"); 
    printf("8-agosto:\n"); 
    printf("9-setembro:\n"); 
    printf("10-outubro:\n"); 
    printf("11-novembro:\n"); 
    printf("12-dezembro:\n"); 
    scanf("%d", &opcao); 

    switch(opcao){ 

        case 1: 
        printf("voce escolheu janeiro:\n"); 
        break; 

        case 2: 
        printf("voce escolheu fevereiro:\n"); 
        break; 

        case 3: 
        printf("voce escolheu marco:\n"); 
        break; 

        case 4: 
        printf("voce escolheu abril:\n");
        break; 
        
        case 5: 
        printf("voce escolheu maio:\n"); 
        break; 

        case 6: 
        printf("voce escolheu junho:\n"); 
        break; 

        case 7: 
        printf("voce escolheu julho:\n"); 
        break; 

        case 8: 
        printf("voce escolheu agosto:\n");
        break; 
        
        case 9: 
        printf("voce escolheu setembro:\n"); 
        break; 

        case 10: 
        printf("voce escolheu outubro:\n"); 
        break; 

        case 11: 
        printf("voce escolheu novembro:\n"); 
        break; 

        case 12: 
        printf("voce escolheu dezembro:\n");
        break; 

        default: 
        printf("Opcao Invalida! Programa Encerrado"); 
        return 1;
    }
    return 0;
}

     









