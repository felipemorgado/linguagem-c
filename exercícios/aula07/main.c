#include <stdio.h>
#include <stdlib.h>

int main(void)
{                                                   // %c guarda 1 caractere e o %string guarda uma sequencia
                                                   //  N�o � obrigatorio colocar o & no scanf   (s� no string)
    char nome[50];                      //  sempre tem que colocar 1 a + que vc quer no []

    printf("Digite o seu nome: ");
    //scanf("%s", nome);

    fgets(nome,50,stdin);           // n�o vai parar no espa�o em branco e usa... variavel, quantidade, e teclado

    printf("\nO nome e %s", nome);
    return 0;
}
