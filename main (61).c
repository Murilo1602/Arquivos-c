#include <stdio.h>

int main() {
    float precos[10]; 
    int i; 
    float maisCaro, maisBarato; 
    int posicaoMaisCaro = 0;
    int posicaoMaisBarato = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    maisCaro = precos[0];
    maisBarato = precos[0];

    for (i = 1; i < 10; i++) {
        if (precos[i] > maisCaro) {
            maisCaro = precos[i];
            posicaoMaisCaro = i;
        }
        if (precos[i] < maisBarato) {
            maisBarato = precos[i];
            posicaoMaisBarato = i;
        }
    }

    printf("\nO produto mais caro foi o produto %d com preco R$ %.2f\n", posicaoMaisCaro + 1, maisCaro);
    printf("O produto mais barato foi o produto %d com preco R$ %.2f\n", posicaoMaisBarato + 1, maisBarato);

    return 0;
}