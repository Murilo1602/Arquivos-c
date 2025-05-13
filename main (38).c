#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 200; i++) { //Esse for serve para indicar que os numeros citados vão de 1 a 200
        if (i % 2 == 0) { //Esse if serve para indicar que a soma vai pulando de 2 em 2(numeros pares)
            soma += i;
        }
    }
    printf("A soma dos 100 primeiros números pares (de 1 a 200) é: %d\n", soma); //Esse printf serve para mostrar a soma

return 0;
}
