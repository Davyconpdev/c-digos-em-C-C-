#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float primeironumero;
    float segundonumero;
    float resultado;
    char opcao;

    printf("digite um n�mero:");
    scanf("%f", &primeironumero);

    printf("digite outro n�mero:");
    scanf("%f", &segundonumero);

    fflush(stdin); // limpa o cache de imput.

    printf("digite * / + - :");
    printf("escolha uma opera��o:");
    scanf("%c", &opcao);

    system("cls || clear");

    switch (opcao)

    {
    case '*':
        resultado = primeironumero * segundonumero;
        break;
    case '/':
        resultado = primeironumero / segundonumero;
        break;
    case '+':
        resultado = primeironumero + segundonumero;
        break;
    case '-':
        resultado = primeironumero - segundonumero;
        break;
    default:
        printf("opera��o Inv�lida.");
        break;
    }

    printf("primeiro n�mero: %.1f \n", primeironumero);
    printf("segundo n�mero: %.1f \n", segundonumero);
    printf("opera��o escolhida: %c \n", opcao);
    printf("Resultado: %.2f \n", resultado);

    return 0;
}
