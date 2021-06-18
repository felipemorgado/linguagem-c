#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letra; // variavel do tipo chat, contem caracteres
    int x;      // variavel para numero inteiro
    float salario;  // variavel do tipo float(real) contem casas decimais

    //atribuindo valores para as variaveis
    letra = 'a';
    x = 10;
    salario = 3972.80;

    //saida de dados na tela
    printf("letra = %c\n", letra);
    printf("x = %d\n", x);
    printf("salario = %.2f\n", salario);        // %.2f significa que vc vai deixar 2 casas decimais
    system("pause");
    return 0;
}
