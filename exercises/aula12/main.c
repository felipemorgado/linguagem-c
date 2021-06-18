#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("\nOs numero sao iguais\n");
    } else {
        if (n1 > n2) {
            printf("\nO maior valor eh = %d\n", n1);
        } else {
            printf("\nO maior valor eh = %d\n", n2);
        }
    }

    return (0);
}
