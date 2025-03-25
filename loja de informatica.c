#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//inicio
int main (){
    setlocale (LC_ALL,"");
    int opcao, quantidade, preco_dos_itens, preco_final;
    char escolha;
    preco_dos_itens = 0;
    preco_final = 0;
    do{
    printf("--- LOJA DE INFORMATICA ---\n Os produtos disponiveis para compra são:\n");
    printf("1- Teclado - R$ 100,00\n");
    printf("2- Mouse - R$ 50,00\n");
    printf("3- Monitor - R$ 800,00\n");
    printf("4- Placa de Vídeo - R$ 2000,00\n");
    printf("5- Sair\n");
    printf("Escolha um produto: ");
    scanf("%d", &opcao);
    
        if(opcao ==5){
            break;
        }
    
    switch(opcao){
        case 1:
        printf("Quantas unidades do Teclado gostaria de comprar?\n");
        scanf("%d", &quantidade);
        preco_dos_itens = quantidade * 100;
        printf("O valor atual da sua compra é de: %d \n", preco_dos_itens);
        break;
        
        case 2:
        printf("Quantas unidades do Mouse gostaria de comprar?\n");
        scanf("%d", &quantidade);
        preco_dos_itens = quantidade * 50;
        printf("O valor atual da sua compra é de: %d \n", preco_dos_itens);
        break;
        
        case 3:
        printf("Quantas unidades do Monitor gostaria de comprar?\n");
        scanf("%d", &quantidade);
        preco_dos_itens = quantidade * 800;
        printf("O valor atual da sua compra é de: %d \n", preco_dos_itens);
        break;
        
        case 4:
        printf("Quantas unidades da Placa de video gostaria de comprar?\n");
        scanf("%d", &quantidade);
        preco_dos_itens = quantidade * 2000;
        printf("O valor atual da sua compra é de: %d \n", preco_dos_itens);
        break;
        
        case 5:
        system("clear");
        printf("Saindo...\n");
        break;
        
        default:
        printf("Erro");
        return 1;
    
    }    
        preco_final = preco_final + preco_dos_itens;
        printf("O valor final é %.2d\n", preco_final);
        printf("Deseja continuar comprando? Digite 's' para sim e 'n' para não.\n");
        scanf("%s", &escolha);
        if (escolha== 's' || escolha== 'S'){
            system("clear");
        }
    }while(escolha == 'S' || escolha =='s');
    
    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Total da compra: R$ %.2d\n", preco_final);
    printf("Obrigado por comprar na nossa loja\n");
        
return 0;
}
