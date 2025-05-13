#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produtos[5]; // Essa parte indica que é uma array com 5 produtos

    for (int i = 0; i < 5; i++) { //Esse for serve para indicar o cadastro dos produtos
        printf("Produto %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("\n");
    }

    
    printf("\nTotal por produto:\n"); //Esse printf vai indicar o total de coda produtro no final do codigo
    for (int i = 0; i < 5; i++) { //Esse for serve para indicar ao programa que vai ser cadastrados 5 produtos
        float total = produtos[i].preco * produtos[i].quantidade;
        printf("Produto: %s | Preço: R$%.2f | Quantidade: %d | Total: R$%.2f\n",
               produtos[i].nome,
               produtos[i].preco,
               produtos[i].quantidade,
               total);
    }

    return 0;
}
