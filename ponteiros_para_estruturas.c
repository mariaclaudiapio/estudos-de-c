#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[50];
    int idade;
} Pessoa;


int main()
{
    Pessoa* ponteiro = (Pessoa*)malloc(sizeof(Pessoa));

    printf("Digite o nome da pessoa:\n");
    scanf("%s", ponteiro->nome); // a seta acessa o local da variável diretamente

    printf("Digite a idade da pessoa:\n");
    scanf("%d", &ponteiro->idade);

    printf("A pessoa '%s' possui %d anos.\n", ponteiro->nome, ponteiro->idade);

    free(ponteiro);

    return 0;
}
