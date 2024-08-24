#include <iostream>
#include <math.h>

int main()
{
    float notaTrabalho, nota_da_prova;

    printf("nota trabalho: ");
    scanf("%f", &notaTrabalho);

    printf("nota da prova: ");
    scanf("%f", &nota_da_prova);

    float nota_final = (nota_da_prova * 0.6) + (notaTrabalho * 0.4);

    printf("Your final average was, %.2f",nota_final);
}
