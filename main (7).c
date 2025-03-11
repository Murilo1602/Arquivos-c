//Biblioteca  
#include <stdio.h>  
#include <locale.h>  
//Inicio  
int main (){  
    setlocale(LC_ALL,"");
    int l1, l2, l3;
    printf("informe l1:\n");
    scanf("%d", &l1);
    printf("informe l2:\n");
    scanf("%d", &l2);
    printf("informe l3:\n");
    scanf("%d", &l3);
    if (l1 == l2 == l3)
    {
        printf("equilatero:\n");
    }
    else if (l1 != l2 != l3)
    {
        printf("escaleno:\n");
    }
    else 
    {
        printf("isosceles:\n");
    }
return 0;
}