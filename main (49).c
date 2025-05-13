#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];
    char nomeBusca[50];
    int i;
    int encontrado = 0;

    printf("Cadastro de 3 alunos:\n");
    for (i = 0; i < 3; i++) { //Esse for serve para indicar ao programa que serão adicionados as informações de 3 alunos
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
    printf("\nDigite o nome do aluno que deseja buscar: "); //Esse printf serve para buscar o aluno e ver suas informações
    scanf("%s", nomeBusca);
    for (i = 0; i < 3; i++) { //Esse for serve para o programa detectar os 3 alunos cadastrados no codigo
        int I = 0;
        int iguais = 1;
        while (alunos[i].nome[I] != '\0' || nomeBusca[I] != '\0') {
            if (alunos[i].nome[I] != nomeBusca[I]) {
                iguais = 0;
                break;
            }
            I++;
        }
        if (iguais) { //Esse if serve para expor as informações do aluno desejado
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) { //Esse if serve para caso o aluno nao seja encontrado, apareça uma menssagem de nao encontrado
        printf("\nAluno não encontrado.\n");
    }

    return 0;
}