#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char codigo;

    printf("Seja Bem-Vindo(a) Prezado(a) Cliente!");
    printf("\n");
    
    printf("\n________ MENU CARD�PIO _______ |");
    printf("\nC�digos.|    Pratos.  |    R$. |");
    printf("\n        |             |        |");
    printf("\n 1.          Picanha. -  25,00 |");
    printf("\n 2.          Lasanha. -  20,00 |");
    printf("\n 3.       Strogonoff. -  18,00 |");
    printf("\n 4.   Bife Acebolado. -  15,00 |");
    printf("\n 5.      P�o com Ovo. -   5,00 |");
    printf("\n______________________________\n");

    printf("digite o c�digo do seu prato:");
    scanf("%c", &codigo);

    switch (codigo)
    {
    case '1':
        printf("1 | Picanha | R$ 25,00");
        break;
    case '2':
        printf("Lasanha.  R$ 20,00");
        break;
    case '3':
        printf("Strogonoff.  R$ 18,00");
        break;
    case '4':
        printf("Bife Acebolado.  R$ 15,00");
        break;
    case '5':
        printf("P�o com Ovo.  R$ 5,00");
        break;

    default:
        printf("Op��o indispon�vel/inv�lida\n");
        break;
    }

    return 0;
}