#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf("(Do 1 at� o 7) digite um n�mero:");
    scanf("%d", &dia);

    switch (dia)
    {
    case 2:
        printf("Segunda-feira - Dia �til.");
        break;

    case 3:
        printf("Ter�a-feira - Dia �til.");
        break;

    case 4:
        printf("Quarta-feira - Dia �til.");
        break;

    case 5:
        printf("Quinta-feira - Dia �til.");
        break;

    case 6:
        printf("Sexta-feira - Dia �til.");
        break;

    case 1:
        printf("Domingo - Final de Semana!");
        break;

    case 7:
        printf("Sab�do - Final de Semana!");
        break;

    default:
        printf("N�mero Inv�lido.");
        break;
    }

    return 0;
}