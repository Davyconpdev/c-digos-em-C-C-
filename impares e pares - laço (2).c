#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %d� n�mero:", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {

        if (numero % 2 == 1)
                impares++;
        }
    }

    printf("n�meros pares: %d \n", pares);
    printf("n�meros �mpares: %d \n", impares);

    return 0;
}