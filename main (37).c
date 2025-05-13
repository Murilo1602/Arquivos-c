#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número para ver sua tabuada: "); //Esse printf serve para que voce possa ditar o numero da tabuada que quer
    scanf("%d", &numero);
    printf("Tabuada do %d:\n", numero);
    
    for (i = 1; i <= 10; i++) { //Esse for serve para indicar de qual numero ate qual numero é para aparecer a tabuada
        printf("%d x %d = %d\n", numero, i, numero * i); //Esse printf é o que armazena o tipo de conta que vai ser feita
    }
return 0;
}
