#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    soma = a + b;

    printf("\nA soma eh = %d\n", soma);

    if (soma > 10) {
        printf("\nA soma eh maior que 10\n");
    } else {
        printf("A soma nao eh maior que 10");
    }

    return (0);
}
