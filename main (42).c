#include <stdio.h>

int main() {
    int i, numero;
    int maior, menor;

    printf("Digite 10 numeros:\n"); //Esse printf pede para que o usuario digite os 10 numeros 
    for(i = 0; i < 10; i++) { //Esse for serve para indicar que vão ser so 10 numeros que o usuario vai digitar
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);
        if(i == 0) { //Esse if serve para verificar se o usuario esta lendo o primeiro numero
            maior = numero;
            menor = numero;
        } else { //Esse else serve para fazer a comparação entre os numeros
            if(numero > maior) { //Esse if serve para indicar quando tem um novo numero maior
                maior = numero;
            }
            if(numero < menor) { //Esse if serve para indicar quando tem um novo numero menor
                menor = numero;
            }
        }
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}