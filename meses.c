#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int dia;



    printf("(Do 1 at� o 7); digite um n�mero:");
    scanf("%d",&dia);

    switch (dia)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia �til.");
        break;

    case 1:
    case 7:
        printf("Final de Semana!");
        break;

    default:
        printf("N�mero Inv�lido.");
         break;
    }


    return 0;
}