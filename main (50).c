#include <stdio.h>

int main() {
    char nomes[5][50];
    float medias[5];
    float soma = 0.0, mediaGeral;

    for (int i = 0; i < 5; i++) { //Esse for serve para indicar ao programa que serao so 5 alunos 
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);
        printf("Digite a média final de %s: ", nomes[i]);
        scanf("%f", &medias[i]);

        soma += medias[i]; // Essa parte serve para o programa fazer a conta de soma das medias
    }

    mediaGeral = soma / 5; //Essa parte serve para o programa colcular a media geral da turma

    printf("\n--- Média Geral da Turma ---\n"); //Esse printf serve para expor para o usuario a media geral da turma no final do programa 
    for (int i = 0; i < 5; i++) {
        printf("Aluno: %s - Média Final: %.2f\n", nomes[i], medias[i]);
    }
    printf("Média Geral da Turma: %.2f\n", mediaGeral);

    return 0;
}
