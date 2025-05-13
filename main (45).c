//biblioteca
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int idade;
    float nota;
} Aluno;

int main(){
    Aluno aluno;

    printf("Informe o nome: "); //Esses printf e scanf serve para adicionar ao programa os dados do aluno
    scanf(" %[^\n]", aluno.nome);
    printf("Informe a idade: ");
    scanf("%d", &aluno.idade);
    printf("Informe a nota: ");
    scanf("%f", &aluno.nota);
    
    system ("clear"); //Esse system clear serve para limpar o programa 
    
    printf("Dados do aluno:\nNome: %s\n", aluno.nome); //Esses printf serve para expor os dados do aluno
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f", aluno.nota);
    
    return 0;
}