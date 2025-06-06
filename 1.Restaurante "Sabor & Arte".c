#include <stdio.h>

int main() {
    int pratos;
    char sobremesa, bebida;
    float total, desconto = 0, final;

    printf("Quantidade de pratos principais: ");
    scanf("%d", &pratos);
    printf("Pediu sobremesa? (s/n): ");
    scanf(" %c", &sobremesa);
    printf("Pediu bebida? (s/n): ");
    scanf(" %c", &bebida);
    printf("Valor total da conta (sem desconto): R$ ");
    scanf("%f", &total);

    if (pratos > 3) {
        desconto += 10;
    }

    if (sobremesa == 's') {
        if (bebida == 's') {
            desconto += 5;
        }
    }
    if (sobremesa == 'S') {
        if (bebida == 'S') {
            desconto += 5;
        }
    }
    if (sobremesa == 's') {
        if (bebida == 'S') {
            desconto += 5;
        }
    }
    if (sobremesa == 'S') {
        if (bebida == 's') {
            desconto += 5;
        }
    }

    final = total * (1 - desconto / 100);

    printf("\nDesconto aplicado: %.1f por cento\n", desconto);
    printf("Valor final com desconto: R$ %.2f\n", final);

return 0;
}
