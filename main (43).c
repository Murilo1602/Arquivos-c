//biblioteca
#include <stdio.h>

int main(){

    int n[10], i, pares = 0;
    for (i = 0; i < 10; i++) { //Esse for serve para indicar ao programa que vai ser so 10 numeros qua o usuario vai digitar
        printf("Digite um número: ");
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0){ //Esse if serve para indicar que os numeros pares vao de 2 em 2
            pares++; 
        }
    }
    printf("A quantidade de números pares é: %d\n", pares); //Esse printf indica no final do programa a quantidade de numeros pares

    return 0;
}
