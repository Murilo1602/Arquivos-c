#include <stdio.h>

int main() {
    int ingressos; 
    int cliente = 1;

    do {
        printf("Cliente %d - Digite a quantidade de ingressos comprados : \n", cliente);
        printf("(0 - Sair)\n");
        scanf("%d", &ingressos);
        
        
        if (ingressos > 0) {
            int pontos = ingressos * 10;
            printf("Cliente %d acumulou %d pontos.\n\n", cliente, pontos);
            cliente++;
        } else if (ingressos < 0) {
            printf("Quantidade inválida. Tente novamente.\n\n");
        }

    } while (ingressos != 0);

    printf("Cadastro finalizado.\n");
    return 0;
}