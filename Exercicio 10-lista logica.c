#include <stdio.h>

int main() {
    int numero, i;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: "); //Esse printf serve para pedir um numero para o usuario
    scanf("%d", &numero);
    {
        for (i = 1; i <= numero; i++) { //Esse for serve para calcular o fatorial do numero digitado
            fatorial *= i;
        }
        printf("%d! = %d\n", numero, fatorial); //Esse printf serve para exibir o resultado final do fatorial
    }

    return 0;
}
