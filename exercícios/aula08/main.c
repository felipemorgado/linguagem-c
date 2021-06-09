#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1, nota2, media;

    printf("Digite a av1: ");
    scanf("%f", &nota1);

    printf("Digite a av2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nA media e = %.2f\n", media);
          system("pause");
          return 0;
}
