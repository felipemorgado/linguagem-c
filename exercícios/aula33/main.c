#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct ficha_aluno {
        char nome[40];
        int numero;
        float nota;
    };

    struct ficha_aluno aluno;       // nome da variave struct é aluno (as outras sao variaveis interna)

    printf("\n-------- Cadastro de aluno -------- \n\n\n");

    printf("Nome do aluno.....: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n-------- Lendo a struct -------- \n\n\n");

    printf("Nome..........: %s", aluno.nome);
    printf("Numero.......: %d\n", aluno.numero);
    printf("Nota............: %.2f", aluno.nota);


    return (0);
}
