#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    int i;
    float soma = 0;
    float media;

    for (i = 0; i < 3; i++)
    {

        do
        {
            printf("Sua %d� nota: \n", i + 1);
            scanf("%f", &nota);

        } while (nota < 0 || nota > 10);

        soma += nota;
    }
    system("cls");

    media = soma / i;

    if (media >= 7)
    {
        printf("APROVADO. Parab�ns!");
    }
    else if (media >= 5)
    {
        printf("RECUPERA��O.");
    }
    else
    {
        printf("REPROVADO.");
    }
    printf("\nM�dia: %.2f \n", media);
    return 0;
}
