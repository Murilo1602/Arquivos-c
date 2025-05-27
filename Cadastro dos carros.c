#include <stdio.h>
#include <string.h>

#define MAX_VEICULOS 100

typedef struct {
    int id;
    char marca[50];
    char modelo[50];
    int ano;
    float valor;
    int combustivel; // 0-Gasolina, 1-Álcool, 2-Disel, 3-Podium
    char cor[30];
} Veiculo;

Veiculo veiculos[MAX_VEICULOS];
int quantidade = 0;

void cadastrarVeiculo() {
    if (quantidade >= MAX_VEICULOS) {
        printf("Limite de veículos atingido!\n");
        return;
    }

    Veiculo v;

    printf("\nID: ");
    scanf("%d", &v.id);
    getchar();

    printf("Marca: ");
    fgets(v.marca, sizeof(v.marca), stdin);
    v.marca[strcspn(v.marca, "\n")] = 0;

    printf("Modelo: ");
    fgets(v.modelo, sizeof(v.modelo), stdin);
    v.modelo[strcspn(v.modelo, "\n")] = 0;

    printf("Ano: ");
    scanf("%d", &v.ano);

    printf("Valor: ");
    scanf("%f", &v.valor);

    printf("Tipo de Combustível (0-Gasolina, 1-Álcool, 2-Disel, 3-Podium): ");
    scanf("%d", &v.combustivel);

    getchar();
    printf("Cor: ");
    fgets(v.cor, sizeof(v.cor), stdin);
    v.cor[strcspn(v.cor, "\n")] = 0;

    veiculos[quantidade++] = v;
    printf("Veículo cadastrado com sucesso!\n");
}

void listarVeiculos() {
    printf("\n--- Lista de Veículos ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("ID: %d | Marca: %s | Modelo: %s | Ano: %d | Valor: %.2f | Combustível: %d | Cor: %s\n",
               veiculos[i].id, veiculos[i].marca, veiculos[i].modelo,
               veiculos[i].ano, veiculos[i].valor, veiculos[i].combustivel, veiculos[i].cor);
    }
}

void buscarVeiculo() {
    int id;
    printf("\nDigite o ID do veículo: ");
    scanf("%d", &id);

    for (int i = 0; i < quantidade; i++) {
        if (veiculos[i].id == id) {
            printf("Veículo encontrado:\n");
            printf("ID: %d | Marca: %s | Modelo: %s | Ano: %d | Valor: %.2f | Combustível: %d | Cor: %s\n",
                   veiculos[i].id, veiculos[i].marca, veiculos[i].modelo,
                   veiculos[i].ano, veiculos[i].valor, veiculos[i].combustivel, veiculos[i].cor);
            return;
        }
    }
    printf("Veiculo nao cadastrado.\n");
}

void filtrarPorCombustivel() {
    int tipo;
    printf("\nDigite o tipo de combustível (0-Gasolina, 1-Álcool, 2-Disel, 3-Podium): ");
    scanf("%d", &tipo);

    printf("\n--- Veículos com combustível %d ---\n", tipo);
    for (int i = 0; i < quantidade; i++) {
        if (veiculos[i].combustivel == tipo) {
            printf("ID: %d | Marca: %s | Modelo: %s | Ano: %d | Valor: %.2f | Cor: %s\n",
                   veiculos[i].id, veiculos[i].marca, veiculos[i].modelo,
                   veiculos[i].ano, veiculos[i].valor, veiculos[i].cor);
        }
    }
}

int main() {
    int opcao;

    do {
        printf("\n----- MENU -----\n");
        printf("1 - Cadastrar veículo\n");
        printf("2 - Listar veículos\n");
        printf("3 - Buscar veículo por ID\n");
        printf("4 - Filtrar por tipo de combustível\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                listarVeiculos();
                break;
            case 3:
                buscarVeiculo();
                break;
            case 4:
                filtrarPorCombustivel();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
