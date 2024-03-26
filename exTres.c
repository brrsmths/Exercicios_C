#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;
    float pesoIdeal;

    printf ("Digite a altura: \n");
    scanf ("%f", &altura);

    printf ("Digite o sexo ('M' para masculino e 'F' para feminino): \n");
    scanf (" %c", &sexo);

    if (sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else 
    {
        printf ("Sexo invalido");
        return 1;
    }

    printf ("O peso ideal seria de: %.2f kilos\n", pesoIdeal);
    
    return 0;
}