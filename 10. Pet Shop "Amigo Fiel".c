#include <stdio.h>

struct Animal {
    char nome[50];
    char tipo[30];
    int idade;
};

void AnimaisVelhos(struct Animal animais[], int tamanho);

int main() {
    struct Animal animais[6]; 
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o nome do animal %d: ", i + 1);
        scanf(" %[^\n]", animais[i].nome);
        printf("Digite o tipo do animal %d: ", i + 1);
        scanf(" %[^\n]", animais[i].tipo);
        printf("Digite a idade do animal %d: ", i + 1);
        scanf("%d", &animais[i].idade);
    }

    printf("\n--- Animais com mais de 5 anos ---\n");
    AnimaisVelhos(animais, 6);

return 0;
}

void AnimaisVelhos(struct Animal animais[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (animais[i].idade > 5) {
            printf("Nome: %s | Idade: %d anos\n", animais[i].nome, animais[i].idade);
        }
    }
}
