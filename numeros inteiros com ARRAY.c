#include <stdio.h>

int main () {
    int numero[3];
    int i, maior, menor;
    
    printf("Digite 3 numeros inteiros: \n");
    for(i = 0; i < 3; i++){
        scanf("%d", &numero[i]);
    }
    maior = numero[0];
    menor = numero[0];
    
    for(i = 1; i < 3; i++){
        if(numero[i] > maior){
            maior = numero[i];
        }
        if(numero[i] < menor){
            menor = numero[i];
        }
        
    }
    
    printf("\n O maior é: %d\n", maior);
    printf("O menor é: %d", menor);
    
return 0;
}
    
