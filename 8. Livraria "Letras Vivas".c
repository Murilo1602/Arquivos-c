#include <stdio.h>

struct Livro {
    char nome[50];
    int ano;
};

int main() {
    struct Livro livros[8]; 
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite o nome do livro %d: ", i + 1);
        scanf(" %[^\n]", livros[i].nome);
        printf("Digite o ano de publicacao do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano);
    }

    printf("\n--== Livros publicados antes do ano 2000 ==--\n");

    for (i = 0; i < 8; i++) {
        if (livros[i].ano < 2000) {
            printf("Livro: %s | Ano: %d\n", livros[i].nome, livros[i].ano);
        }
    }

return 0;
}
