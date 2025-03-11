//biblioteca 
#include <stdio.h>   
#include <locale.h>   
//Inicio   
int main (){   
    setlocale (LC_ALL,"");  
    int opcao; 
    float item1, item2, item3, item4;

    printf("selecione o item do cardapio(1-5):\n"); 
    printf("1- X-Burguer-R$ 10,00:\n"); 
    printf("2- X-Salada - R$ 12,00:\n"); 
    printf("3- X-Bacon - R$ 15,00:\n"); 
    printf("4- Hot Dog - R$ 8,00:\n"); 
    printf("5- Refrigerante - R$ 5,00:\n");
    scanf("%d", &opcao); 

    switch(opcao){ 

        case 1: 
        printf("voce escolheu X-Burguer-R$ 10,00:\n"); 
        break; 

        case 2: 
        printf("voce escolheu X-Salada - R$ 12,00:\n"); 
        break; 

        case 3: 
        printf("voce escolheu X-Bacon - R$ 15,00:\n"); 
        break; 

        case 4: 
        printf("voce escolheu Hot Dog - R$ 8,00:\n");
        break; 
        
        case 5:
        printf("voce escolheu Refrigerante - R$ 5,00");
        
        default: 
        printf("Opcao Invalida!"); 
        return 1;
    }
    return 0;
}

     





