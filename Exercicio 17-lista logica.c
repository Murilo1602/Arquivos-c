#include <stdio.h>

struct Pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct Pessoa pessoa1, pessoa2;

    printf("Digite o nome da primeira pessoa: "); // Esse printf serve para depositar as informações da primeira pessoa
    scanf("%s", pessoa1.nome);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite o nome da segunda pessoa: "); //Esse printf serve para depositar as informações da segunda pessoa
    scanf("%s", pessoa2.nome);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);

    if (pessoa1.idade > pessoa2.idade) { //Esse if e o else if serve para comparar a idade das duas pessoas e falar quem é mais velha
        printf("%s é mais velha que %s.\n", pessoa1.nome, pessoa2.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        printf("%s é mais velha que %s.\n", pessoa2.nome, pessoa1.nome);
    } else { //Esse else serve para indicar que as duas pessoas tem a mesma 
        printf("%s e %s têm a mesma idade.\n", pessoa1.nome, pessoa2.nome);
    }

    return 0;
}
