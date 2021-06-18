#include <stdio.h>
#include <stdlib.h>

int main(void)
{                                                   // %c guarda 1 caractere e o %string guarda uma sequencia
                                                   //  Não é obrigatorio colocar o & no scanf   (só no string)
    char nome[50];                      //  sempre tem que colocar 1 a + que vc quer no []

    printf("Digite o seu nome: ");
    //scanf("%s", nome);

    fgets(nome,50,stdin);           // não vai parar no espaço em branco e usa... variavel, quantidade, e teclado

    printf("\nO nome e %s", nome);
    return 0;
}
