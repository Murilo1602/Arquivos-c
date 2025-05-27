#include <stdio.h>
#include <string.h>

typedef struct {
    char descricao[100];
    char horario[10];
    int concluida;
} Tarefa;

const int maxTarefas = 50;

Tarefa tarefas[50];
int totalTarefas = 0;

void adicionarTarefa() {
    if (totalTarefas < maxTarefas) {
        printf("\n--- Adicionar Tarefa ---\n");

        printf("Digite a descrição da tarefa: ");
        scanf(" %[^\n]", tarefas[totalTarefas].descricao);

        printf("Digite o horário: ");
        scanf(" %[^\n]", tarefas[totalTarefas].horario);

        tarefas[totalTarefas].concluida = 0;
        totalTarefas++;

        printf("Tarefa adicionada com sucesso.\n");
    } else {
        printf("Você atingiu o limite máximo de tarefas.\n");
    }
}

void listarTarefasPendentes() {
    printf("\n--- Tarefas Pendentes ---\n");
    int encontrou = 0;

    for (int i = 0; i < totalTarefas; i++) {
        if (tarefas[i].concluida == 0) {
            printf("%d - %s (Horário: %s)\n", i + 1, tarefas[i].descricao, tarefas[i].horario);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhuma tarefa pendente.\n");
    }
}

void concluirTarefa() {
    int indice;

    listarTarefasPendentes();
    printf("\nDigite o número da tarefa que você concluiu: ");
    scanf("%d", &indice);

    if (indice >= 1 && indice <= totalTarefas) {
        if (tarefas[indice - 1].concluida == 0) {
            tarefas[indice - 1].concluida = 1;
            printf("Tarefa concluída com sucesso.\n");
        } else {
            printf("Esta tarefa já está concluída.\n");
        }
    } else {
        printf("Número de tarefa inválido.\n");
    }
}

void exibirMenu() {
    printf("\n===== Menu =====\n");
    printf("1 - Adicionar tarefa\n");
    printf("2 - Listar tarefas pendentes\n");
    printf("3 - Concluir tarefa\n");
    printf("0 - Sair\n");
}

int main() {
    int opcao;

    do {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarTarefa();
                break;
            case 2:
                listarTarefasPendentes();
                break;
            case 3:
                concluirTarefa();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
