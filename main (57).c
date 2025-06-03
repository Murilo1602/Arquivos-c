#include <stdio.h>

typedef struct {
    int valor;
} Compra;

void mudaValor(int *a, int *b);
void setValor(Compra *compra);
void imprimirFaturamento(Compra compra);

int main()
{
// 	int a = 10;
// 	int *b;

// 	b = &a;

// 	printf("A - %d\n", a);
// 	printf("&A - %p\n", &a);
//     printf("B - %d\n", *b);
//     printf("&B - %p\n", b);
    
//     *b = 20;
    
//     printf("A - %d\n", a);
//     printf("B - %d\n", *b);
int a = 10, b = 20;

printf("A - %d\n", a);
printf("B - %d\n", b);

mudaValor(&a, &b);

printf("A - %d\n", a);
printf("B - %d\n", b);

Compra compra;

compra.valor = 30;

setValor(&compra);

imprimirFaturamento(compra);


	return 0;
}

void mudaValor(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void setValor(Compra *compra) {
    printf("Insira um valor: ");
    scanf("%d", &compra->valor);
}
void imprimirFaturamento(Compra compra) {
    printf("---- FATURAMENTO ----\n");
    printf("R$ %d\n", compra.valor);
}












