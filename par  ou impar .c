#include <stdio.h>
#include <stdlib.h>

int main()     {

    int numero;
    

    printf("Insira um n�mero:");
    scanf("%d", &numero);

    
     if (numero %2 == 0)
    {
        printf("Esse n�mero � Par");
    }
    else
    {
        printf("Esse n�mero � �mpar");
    }

    return 0;
}
