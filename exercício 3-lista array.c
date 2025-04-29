#include <stdio.h>

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números na ordem inversa:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
