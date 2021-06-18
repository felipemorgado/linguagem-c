#include <stdio.h>
#include <stdlib.h>

//limpador de buffer naquelepiquezin n para NUNCAAAAA ;c

void limparBuffer(void);

int main(void)
{
    char a, b, c;

    a = getchar();
    limparBuffer();

    b = getchar();
    limparBuffer();

    c = getchar();
    limparBuffer();

    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    return (0);
}


void limparBuffer(void) {
    char c;

    while ((c = getchar()) != '\n' && c != EOF);
    return;
}
