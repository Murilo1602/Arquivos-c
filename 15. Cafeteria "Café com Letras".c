#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    for (i = 1; i <= 7; i++) {
        do {
            printf("Digite a nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / 7;
    printf("\nMédia das notas: %.2f\n", media);

    if (media >= 8) {
        printf("Avaliação: Boa\n");
    } else if (media >= 5) {
        printf("Avaliação: Razoável\n");
    } else {
        printf("Avaliação: Ruim\n");
    }

return 0;
}
