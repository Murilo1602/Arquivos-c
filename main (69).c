#include <stdio.h>

int main() {
    float notas[5][4]; 
    float soma;
    float media;
    int i;
    int j;

    for (i = 0; i < 5; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("  Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Resultados Finais ---\n");
    for (i = 0; i < 5; i++) {
        soma = 0;

        for (j = 0; j < 4; j++) {
            soma += notas[i][j];
        }

        media = soma / 4.0;
        printf("Aluno %d - Media: %.2f - ", i + 1, media);

        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

return 0;
}