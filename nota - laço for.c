#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    int i;
    float soma;
    float media;

    for (i = 1; i <= 2; i++)
    {

        do
        {
            printf("Sua %d� nota: \n", i);
            scanf("%f", &nota);

                if (nota < 0 || nota > 10)
            {
                printf("nota inv�lida. digite novamente...\n");
            }
        

        } while (nota < 0 || nota > 10);

        soma += nota;
        media = soma / i;
    }

    system("cls");

    printf("M�dia: %.2f \n", media);

    return 0;
}
