//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int idade;
    printf("informe uma idade:\n");
    scanf("%d", &idade);
    if (idade < 16)
    {
        printf("proibido votar:\n");
    }
    else if (idade >=18 && idade <=69)
    {
        printf("voto obrigatorio");
    }
    else 
    {
        printf("voto opcional:\n");
    }
    
return 0;
}
