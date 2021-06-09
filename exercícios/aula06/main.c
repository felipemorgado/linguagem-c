#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, res, resto;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);

    printf("\nDigite outro numero: ");
    scanf("%d", &n2);

    res = n1 / n2;
    printf("\nO resultado sera: %d", res);


    resto = n1 % n2;
    printf("\nO resto sera: %d\n", resto);

    system("pause");
    return 0;
}
