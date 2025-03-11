//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int ano;
    printf("informe um ano:\n");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("ano bissexto:\n");
    }
    else 
    {
        printf("ano não bissexto:\n");
    }
return 0;
}
    
