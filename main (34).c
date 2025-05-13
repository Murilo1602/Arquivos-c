//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int idade;
    printf("informe uma idade:\n"); //Esse printf serve para pedir uma idade
    scanf("%d", &idade);
    if (idade < 16) //Esse if serve para indicar que se a idade for menor que 16, é proibido votar
    {
        printf("proibido votar:\n");
    }
    else if (idade >=18 && idade <=69) //Esse else if serve para indicar que se a idade for maior que 18 e menor que 69, o voto é obrigatorio
    {
        printf("voto obrigatorio");
    }
    else //Esse else indica que se a idade for 17 anos, o voto é facultativo
    {
        printf("voto facultativo:\n");
    }
    
return 0;
}