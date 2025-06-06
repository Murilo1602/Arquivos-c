#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código da peça:\n");
    printf("1 - Camisa\n");
    printf("2 - Calça\n");
    printf("3 - Casaco\n");
    printf("Código: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Peça: Camisa\n");
            printf("Preço: R$ 49.00\n");
            break;
        case 2:
            printf("Peça: Calça\n");
            printf("Preço: R$ 89.00\n");
            break;
        case 3:
            printf("Peça: Casaco\n");
            printf("Preço: R$ 129.00\n");
            break;
        default:
            printf("Código inválido. Tente novamente.\n");
    }

return 0;
}
