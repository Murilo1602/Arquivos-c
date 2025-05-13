#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0.0;
    float media;
    int i;

    printf("Digite 10 numeros:\n"); //Esse printf serve para que o usuario indique 10 numeros
    for (i = 0; i < 10; i++) { //Esse for serve para indicar ao programa que vai ter apenas 10 numeros
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i]; //Essa parte é onde o programa faz a soma dos 10 numeros digitados
    }
    media = soma / 10.0; // Essa parte é onde o programa resolve a media da soma dos numeros
    printf("A media dos numeros é: %.2f\n", media);

    return 0;
}
