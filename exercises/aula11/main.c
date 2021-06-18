#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float av1, av2, media;

    printf("Digite a av1: ");
    scanf("%f", &av1);

    printf("Digite a av2: ");
    scanf("%f", &av2);

    media = (av1 + av2) / 2;

    printf("\nA media eh = %.2f\n", media);

    if (media >= 7) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return (0);
}
