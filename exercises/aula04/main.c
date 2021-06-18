#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char conceito; //variavel do tipo char armazena um unico caractere na memoria
    float nota;
    int matricula;

    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);         //fazer a leitura do valor digitado (temq especificar o tipo e a variavel)
                                    // o & significa endereço de memoria

    printf("Informe a nota: ");
    scanf("%f", &nota);

    printf("Informe a matricula: ");
    scanf("%d", &matricula);

    printf("Conceito: %c \n", conceito);
    printf("Nota: %.1f \n", nota);
    printf("Matricula: %d", matricula);

    system("pause");
    return 0;
}
