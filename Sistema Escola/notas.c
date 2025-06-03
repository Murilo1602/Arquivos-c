#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"

void cadastrarNota(Nota *nota, int *conta) {
    printf("Cadastrar nota\n");
    printf("Informe a matricula do aluno: ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota: ");
    scanf("%f", &nota->nota);
    *conta = *conta + 1;
}

void calcularMedia(Aluno alunos[], Nota notas[]) {
    int matricula, qntNotas = 0;
    float media = 0;
    printf("Informe uma matricula: ");
    scanf("%d", &matricula);
    for(int i = 0; i < 10; i++) {
        if(alunos[i].matricula == matricula) {
            printf("Nome: %s\n", alunos[i].nome);
        }
    }
    for(int i = 0; i < 50; i++) {
        if(notas[i].matricula == matricula) {
            media += notas[i].nota;
            qntNotas++;
        }
    }
    printf("Media: %.2f\n", (media / qntNotas));
}