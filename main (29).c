#include <stdio.h>

int main() {
    int numeros[10], buscado, encontrado = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o número que deseja buscar: ");
    scanf("%d", &buscado);

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == buscado) {
            printf("O número %d está na posição %d.\n", buscado, i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado)
        printf("O número %d não está na lista.\n", buscado);

    return 0;
}
