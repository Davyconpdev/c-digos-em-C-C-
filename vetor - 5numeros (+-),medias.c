#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0, positivo = 0, negativo = 0, maiornum = 0, menornum = 9999, n = 5, numero[n];
    int par = 0, impar = 0;
    float soma = 0, somapar = 0, somaimpar = 0, mediapar = 0, mediaimpar = 0, media = 0;

    for (i = 0; i < n; i++)
    {
        printf("Insira o %d� n�mero:", i + 1);
        scanf("%d", &numero[i]);
        fflush(stdin);

        numero[i] % 2 == 0 ? par++ : impar++;
        numero[i] >= 0 ? positivo++ : negativo++;
        maiornum = numero[i] > maiornum ? numero[i] : maiornum;
        menornum = numero[i] < menornum ? numero[i] : menornum;
        
        if (numero[i] % 2 == 0)
        {
            somapar += numero[i];
        }
        else
        {
            somaimpar += numero[i];
        }
        soma += numero[i];
    }
    mediapar = somapar / par;
    mediaimpar = somaimpar / impar;
    media = soma / n;
    system("cls");

    printf("Quantidade de n�meros pares: %d\n", par);
    printf("Quantidade de n�meros �mpares: %d\n", impar);
    printf("\nQuantidade de n�meros positivos: %d\n", positivo);
    printf("Quantidade de n�meros negativos: %d\n", negativo);
    printf("\nQuantidade de n�meros inseridos: %d\n", n);
    printf("\nMaior n�mero: %d\n", maiornum);
    printf("Menor n�mero: %d\n", menornum);
    printf("\nM�dia dos n�meros pares: %.1f\n", mediapar);
    printf("M�dia dos n�meros �mpares: %.1f\n", mediaimpar);
    printf("M�dia dos n�meros inseridos: %.1f\n", media);
    printf("\nOrdem inversa dos n�meros lidos.");
    for (i = 4; i >= 0; i--)
    {
        printf("\n%d", numero[i]);
    }

    return 0;
}