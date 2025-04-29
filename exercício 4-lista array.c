#include <stdio.h>

int main() {
    float notas[6], media = 0;

    for(int i = 0; i < 6; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= 6;
    printf("Média das notas: %.2f\n", media);
    printf("Notas acima da média:\n");

    for(int i = 0; i < 6; i++) {
        if(notas[i] > media)
            printf("%.2f\n", notas[i]);
    }

    return 0;
}
