#include <stdio.h>

int main() {
    int opcao;
    int num1, num2, resultado;

    do { //Esse "do" serve para ter a repetição do menu
        printf("\n===== MENU =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) { //Esse switch serve para armazenar a função de cada caso
            case 1: //Esse case 1 serve para que se for escolhido faça a soma dos numeros
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                resultado = num1 + num2;
                printf("Resultado da soma: %d\n", resultado);
                break;

            case 2: //Esse case 2 serve para que se for escolhido faça a subtração dos numeros
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                resultado = num1 - num2;
                printf("Resultado da subtracao: %d\n", resultado);
                break;

            case 3: //Esse case 3 serve para que se for escolhido saia do programa
                printf("Saindo do programa...\n");
                break;

            default: //Esse default serve para que caso seja escolhido uma opção que nao existe, apareca uma menssagem de invalido e apareca novamente o menu
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 3); //Esse while serve para que quando a opção 3 for escolhida saia do programa sem aparecer novamente o menu

    return 0;
}
