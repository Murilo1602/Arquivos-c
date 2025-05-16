#include <stdio.h>

int soma(int a, int b);
void subtracao(int a, int b);
int main()
{
    int v1, v2;
    scanf("%d", &v1);
    scanf("%d", &v2);
    
	printf("Hello World");

	int resultado = soma(v1, v2);

	printf("\nResultado: %d\n", resultado);


subtracao(v1,v2);

	return 0;
}

int soma(int a, int b) {
	int res = a + b;

	return res;
}


void subtracao(int a, int b){
    int resultado = a - b;
    
    printf("Resultado: %d", resultado);
}