#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// concatenar string


int main(void)
{
    char str[21] = "Curso ";
    char str2[18] = "de programacao C";


    strncat(str, str2, 15);

    printf("str = %s", str);
    return (0);
}
