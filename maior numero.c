//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int n1, n2, n3;
    printf("informe n1 ");
    scanf("%d",&n1);
    printf("informe n2 ");
    scanf("%d",&n2);
    printf("informe n3 ");
    scanf("%d",&n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("o maior numero é %d", n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("O Maior numero é %d", n2);
    }
    else  if (n3>n1 && n3>n2)
    {
        printf("O Maior numero é %d", n3);
    }
    else
    {
        printf("todas são iguais");
    }
return 0;
}
