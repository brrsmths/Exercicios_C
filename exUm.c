#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUm;
    int numDois;
    int resultado;

    printf("Digite o primeiro numero:");
    scanf("%d", &numUm);

    printf("Digite o segundo numero:");
    scanf("%d", &numDois);

    if (numDois > 0)
    {
        resultado = numUm / numDois;

        printf("O resultado da divisão de %d por %d é %d", numUm, numDois, resultado);
    }

    return 0;
}