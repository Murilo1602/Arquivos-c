//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    int opcao; 
    float estacao1, estacao2, estacao3, estacao4;

    printf("selecione a estacao do ano(1-4):\n"); 
    printf("1-verao:\n"); 
    printf("2-outono:\n"); 
    printf("3-inverno:\n"); 
    printf("4-primavera:\n"); 
    scanf("%d", &opcao); 

    switch(opcao){ 

        case 1: 
        printf("voce escolheu verao:\n"); 
        break; 

        case 2: 
        printf("voce escolheu outono:\n"); 
        break; 

        case 3: 
        printf("voce escolheu inverno:\n"); 
        break; 

        case 4: 
        printf("voce escolheu primavera:\n");
        break; 
        
        default: 
        printf("Opcao Invalida! Programa Encerrado"); 
        return 1;
    }
    return 0;
}

     





