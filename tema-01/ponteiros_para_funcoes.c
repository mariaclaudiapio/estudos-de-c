#include <stdio.h>

void saudacao()
    {
        printf("Olá Mundo!\n");
    }


int main()
{
    printf("**  Ponteiros para funções  **\n\n");

    void (*ponteiro)() = saudacao;

    // chamando a função 'saudacao' através do ponteiro 'ponteiro'
    ponteiro();

    return 0;
}