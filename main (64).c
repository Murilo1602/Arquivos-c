#include <stdio.h>

int main() {
    int quartos[10];
    int ocupados = 0;

    for (int i = 0; i < 10; i++) {
        printf("Quarto %d está ocupado? (1 = sim, 0 = não): ", i + 1);
        scanf("%d", &quartos[i]);

        if (quartos[i] == 1) {
            ocupados++;
        }
    }

    float taxa = (ocupados / 10.0) * 100;
    printf("\nQuartos ocupados: %d de 10\n", ocupados);
    printf("Taxa de ocupação: %.1f%%\n", taxa);

return 0;
}
