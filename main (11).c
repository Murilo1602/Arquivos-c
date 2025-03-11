//biblioteca
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale (LC_ALL,""); 
    int opcao;
    float nota1, nota2, nota3, nota4, media;
    printf("selecione a materia(1-4):\n");
    printf("1-portugues:\n");
    printf("2-matematica:\n");
    printf("3-biologia:\n");
    printf("4-ciencias:\n");
    scanf("%d", &opcao);
   
    switch(opcao){
        case 1:
        printf("voce escolheu portugues:\n");
        printf("digite a primeira nota:\n");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 2:
        printf("voce escolheu matematica:\n");
        printf("digite a primeira nota:\n");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 3:
        printf("voce escolheu biologia:\n");
        printf("digite a primeira nota:\n");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        case 4:
        printf("voce escolheu ciencias:\n");
        printf("digite a primeira nota:\n");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        break;
        
        default:
        printf("Opcao Invalida! Programa Encerrado");
        return 1;
    }
    
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    
    printf("Media Final: %.2f\n", media);
    
    if(media>=9.0)
    {
        printf("conceito A\n");
        printf("situação: Aprovado");
    }
    else if(media>=7.5)
    {
        printf("conceito B\n");
        printf("Aprovado");
    }
    else if(media>=6.0)
    {
        printf("conceito C\n");
        printf("Aprovado");
    }
    else if(media>4.0)
    {
        printf("conceito D\n");
        printf("Reprovado");
    }
    else
    {
        printf("conceito E\n");
        printf("Reprovado =(");
    }
return 0;
}
    
    
    
    
    
    
    
    
    
    
    