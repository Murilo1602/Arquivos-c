//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int n1, n2;
    printf("informe n1 "); //Pede para indicar algun numero
    scanf("%d",&n1);
    printf("informe n2 "); //Pede para indicar algun numero
    scanf("%d",&n2);
    if (n1 > n2) // Se o numero 1 for maior que o numero 2, vai indicar que o numero 1 é o maior
    {
        printf("o maior numero é %d", n1);
    }
    else if (n2 > n1) //Se o numero 2 for maior que o numero 1, vai indicar que o numero 2 é o maior
    {
        printf("O Maior numero é %d", n2);
    }
return 0;
}
