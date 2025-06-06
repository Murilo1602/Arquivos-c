#include <stdio.h>

struct Carro {
    char marca[30];
    int ano;
    int km;
};

int main() {
    struct Carro carros[5]; 
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf(" %[^\n]", carros[i].marca);
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite a quilometragem do carro %d: ", i + 1);
        scanf("%d", &carros[i].km);
    }

    printf("\n--== Carros com mais de 100.000 km rodados ==--\n");

    for (i = 0; i < 5; i++) {
        if (carros[i].km > 100000) {
            printf("Marca: %s | Ano: %d | Km: %d\n", carros[i].marca, carros[i].ano, carros[i].km);
        }
    }

return 0;
}
