#include <stdio.h>
#include <stdlib.h>
#define ICMS 0.18; //declaração da constante

int main(void)
{
    float preco_produto, valor_icms;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f", valor_icms);
    return (0);
}
