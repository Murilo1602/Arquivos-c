#include <stdio.h>

struct Produto {
    char nome[50];
    int quantidade;
    float preco;
};

void calcularTotal(struct Produto produtos[], int tamanho);

int main() {
    struct Produto produtos[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: R$ ");
        scanf("%f", &produtos[i].preco);
        printf("\n");
    }

    calcularTotal(produtos, 10);

return 0;
}

void calcularTotal(struct Produto produtos[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("Valor total em estoque: R$ %.2f\n", total);
}
