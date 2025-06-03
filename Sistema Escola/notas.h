#ifndef NOTAS_H
#define NOTAS_H

typedef struct {
    int matricula;
    float nota;
} Nota;


void cadastrarNota(Nota *nota, int *conta);
void calcularMedia(Aluno alunos[], Nota notas[]);

#endif