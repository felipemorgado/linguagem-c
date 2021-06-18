#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float notas[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 4; i++) {
        printf("nota%d = %.1f\n", i, notas[i]);
    }



    return (0);
}
