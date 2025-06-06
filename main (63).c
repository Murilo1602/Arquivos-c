#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float imc;
};

void classificarIMC(struct Aluno aluno);

int main() {
    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno1.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);
    printf("Digite o IMC do aluno: ");
    scanf("%f", &aluno1.imc);

    classificarIMC(aluno1);

return 0;
}

void classificarIMC(struct Aluno aluno) {
    printf("\n--- Resultado ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("IMC: %.2f\n", aluno.imc);

    if (aluno.imc > 30) {
        printf("Classificacao: Obeso\n");
    } else if (aluno.imc >= 25) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Saudavel\n");
    }
}
