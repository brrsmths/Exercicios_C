#include <stdio.h>
#include <stdlib.h>

int main()
{
 //Declaração de variáveis
    float x;
    float y;
    float z;

//Entrada de dados
    printf("Digite o primeiro valor: \n");
    scanf(" %f", &x);
        //  while(getchar() != '\n'); // Limpa o buffer de entrada ??

    printf("Digite o segundo valor: \n");
    scanf(" %f", &y);

    printf("Digite o terceiro valor: \n");
    scanf(" %f", &z);

//Processamento
    if (x < y + z && y < x + z && z < x + y)
    {
        printf("É um triangulo");
    } else
    {
        printf("Não é um triangulo");
    }
    return 0;
}