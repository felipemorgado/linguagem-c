#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // condição  ?  comando para condição verdadeira  :   comando para condição falsa
    numero >= 0 ? numero++ : numero-- ;

    printf("O novo valor  de numero eh: %d", numero);
    return (0);
}
