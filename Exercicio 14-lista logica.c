#include <stdio.h>

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) { //Esse for serve para indicar ao programa que vai ser apenas 5 numeros 
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números na ordem inversa:\n");
    for(int i = 4; i >= 0; i--) { //Esse for serve para indicar ao programa a inversão na ordem dos numeros digitados
        printf("%d\n", numeros[i]);
    }

    return 0;
}
