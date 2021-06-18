#include <stdio.h>
#include <stdlib.h>

int multiplica(int n1, int n2)
{
    int res;
    res = n1*n2;
    return res; // retorna o valor pra qm chamou
}

int main(void)
{
    int v1,v2, resul;

    printf("Digite o primeiro: ");
    scanf("%d", &v1);

    printf("Digite o segundo: ");
    scanf("%d", &v2);

    resul = multiplica(v1,v2);
    printf("Resultado: %d", resul);
    return (0);
}
