#include <stdio.h>

int main() {
    int numeros[6], soma = 0;

    for(int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma dos números digitados: %d\n", soma);

    return 0;
}
