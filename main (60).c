#include <stdio.h>

int main() {
    int tipo;
    float litros, preco, total;

    printf("Escolha o tipo de combustível:\n");
    printf("1 - Gasolina\n");
    printf("2 - Etanol\n");
    printf("3 - Diesel\n");
    printf("Digite o tipo de combustível: ");
    scanf("%d", &tipo);
    printf("Quantidade em litros: ");
    scanf("%f", &litros);

    switch (tipo) {
        case 1:
            preco = 5.00;
            break;
        case 2:
            preco = 4.00;
            break;
        case 3:
            preco = 6.00;
            break;
        default:
            printf("Tipo de combustível inválido.\n");
            return 1;
    }

    total = litros * preco;
    printf("Total a pagar: R$ %.2f\n", total);

return 0;
}
