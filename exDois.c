#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nUm;
    float nDois;

    printf("Digite o primeiro numero:");
    scanf("%f", &nUm);

    printf("Digite o segundo numero:");
    scanf("%f", &nDois);

    if (nUm > 0 && nDois > 0)
    {
        printf("Valores são válidos.");
    }
    else
    {
        printf("Valores são inválidos.");
    }
    
    return 0;
}