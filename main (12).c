#include <stdio.h>
#include <locale.h>
int main (){  
    setlocale (LC_ALL,""); 
    int opcao;
    printf("selecione o dia(1-7):\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("voce escolheu DOMINGO\n");
        break;
        case 2:
        printf("voce escolheu SEGUNDA\n");
        break;
        case 3:
        printf("voce escolheu TERCA\n");
        break;
        case 4:
        printf("voce escolheu QUARTA\n");
        break;
        case 5:
        printf("voce escolheu QUINTA\n");
        break;
        case 6:
        printf("voce escolheu SEXTA\n");
        break;
        case 7:
        printf("voce escolheu SABADO\n");
        break;
        default:
        printf("Opcao Invalida! Programa Encerrado");
        return 1;
}return 0;}