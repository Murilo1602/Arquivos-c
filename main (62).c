#include <stdio.h>

struct Produto {
    char nome[50];
    int codigo;
    float preco;
};

int main() {
    struct Produto produtos[5];

    for (int i = 0; i < 5; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Preço: R$ ");
        scanf("%f", &produtos[i].preco);
        printf("\n");
    }

    printf("Produtos com preço superior a R$ 10,00:\n");
    for (int i = 0; i < 5; i++) {
        if (produtos[i].preco > 10.00) {
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Preço: R$ %.2f\n", produtos[i].preco);
        }
    }

    return 0;
}
