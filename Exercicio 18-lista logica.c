#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno aluno;
    float media;

    printf("Digite o nome do aluno: "); //Esses printf serve para inserir o nome do aluno e indicar a nota dele
    scanf("%s", aluno.nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3);

    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3; //Esa parte serve para o programa realizar a conta da media

    printf("\nAluno: %s\n", aluno.nome);
    printf("Media: %.2f\n", media);
    if (media >= 6.0) { //Esse if serve para indicar a media minima que o aluno pode atingir para ser aprovado
        printf("Resultado: Aprovado\n");
    } else { //Esse else é para indicar que se o aluno tirar menos que 6 esta reprovado
        printf("Resultado: Reprovado\n");
    }

    return 0;
}
