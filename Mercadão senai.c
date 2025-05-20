#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char produto[30];
    float valor;
    int quantidade;
} Venda;

int numVendas = 0;
Venda vendas[10];

//cadastrar vendas
//faturamento total
//media de quantidade

void cadastrarVenda();
void listarVendas();
void calcularFaturamento();
void mediaQuantidadeVendida();
void finalizaFuncao();

int main(){
    int opcao;
    
    do{
        printf("---- Mercadão SENAI ----\n");
        printf("1- Registrar venda\n");
        printf("2- Relatório de Vendas\n");
        printf("3- Calcular Faturamento\n");
        printf("4- Média da Quantidade Vendida\n");
        printf("0- Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao){
            case 1:
            cadastrarVenda();
            break;
            
            case 2:
            listarVendas();
            break;
            
            case 3:
            calcularFaturamento();
            break;
            
            case 4:
            mediaQuantidadeVendida();
            break;
            
            case 0:
            printf("Obrigado!");
            break;
            
            default:
            printf("Opção inválida, tente novamente!\n\n");
            break;
        }
        
    }while (opcao != 0);
    return 0;
}

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   //momeria vazia para quando der enter ir para o proximo
    getchar();
    system("clear");
}

void cadastrarVenda(){
    system("clear");
    printf("---- Nova Venda ----\n");
    printf("Produto: ");
    scanf("%s", vendas[numVendas].produto);
    printf("Valor unitário: ");
    scanf("%f", &vendas[numVendas].valor);
    printf("Quantidade: ");
    scanf("%d", &vendas[numVendas].quantidade);
    numVendas++;
    finalizaFuncao();
}

void listarVendas(){
    system ("clear");
    printf("----Minhas Vendas ----\n");
    for (int i = 0; i < numVendas; i ++){
        printf("Número da venda: %d\n", i+1);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Valor unitário: %.2f\n", vendas[i].valor);
        printf("Quantiddae: %d\n", vendas[i].quantidade);
        printf("--------------\n");
    }
    finalizaFuncao();
}

void calcularFaturamento(){
    system ("clear");
    printf("---- Meu Faturamento ----\n");
    float faturamento = 0;
    for (int i = 0; i < numVendas; i ++){
        faturamento += (vendas[i].valor*vendas[i].quantidade);
    }
    printf("Faturamento R$ %.2f\n", faturamento);
    finalizaFuncao();
}

void mediaQuantidadeVendida(){
    system("clear");
    printf("---- Média Quantidade Vendida ----\n");
    float media = 0;
    int contagem = 0;
    for (int i = 0; i < numVendas; i ++){
        contagem += vendas[i].quantidade;
    }
    media = contagem / numVendas;
    printf("Média da quantidade: %.2f\n", media);
    finalizaFuncao();
}
