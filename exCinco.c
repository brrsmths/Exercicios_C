#include <stdio.h>
#include <stdlib.h>

int main()
{
//Declaração de variáveis
    float n1;
    float n2;
    char operador;
    float resultado;

//Entrada de dados
    printf("Insira o primeiro número: \n");
    scanf(" %f", &n1);
    
    printf("Insira o operador (+, -, * ou /): \n");
    scanf(" %c", &operador);
    
    printf("Insira o primeiro número: \n");
    scanf(" %f", &n2);

//Processamento
    switch (operador) 
    {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            // Verificar se o divisor não é zero
            if (n2 != 0)
            {
                resultado = n1 / n2;
            } else
            {
                printf("Erro: Divisão por zero! \n");
                return 1;
            }
            break;
        default:
        printf("Operador inválido! \n");
        return 1;
    } 

//Saída do resultado
    printf("O resultado da operação é: %f", resultado);

    return 0;
}