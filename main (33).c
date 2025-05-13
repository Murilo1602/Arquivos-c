//biblioteca
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale (LC_ALL,""); 
    float n1, n2, media;
    printf("Digite as duas notas:\n"); //Pede as duas notas e realiza a conta para que possa ser exibida a media
    scanf("%f %f", &n1, &n2);
    media = (n1 + n2) / 2;
    if (media >= 7)
    {
        printf("Aluno aprovado, sua nota é: %.2f", media); //Se a media for maior que 7, vai indicar que o aluno foi aprovado
    }
    else
    {
        printf("Aluno reprovado, sua nota é: %.2f", media); //Se a media for menor que 7, vai indicar que o aluno foi reprovado
    }
    return 0;
}