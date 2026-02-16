#include <stdio.h>

// Variável com escopo global
int global = 10;

// Funções
void mostreGlobal()
{
    printf("O valor da variável global é %d.\n", global);
    // printf("O valor da variável local é %d.\n", local); (A variável local declarada em main() não é visível aqui)
}


int main()
{
    int local = 5; // variável com escopo local

    printf("O valor da variável global é %d.\n", global);
    printf("O valor da variável local é %d.\n", local);

    mostreGlobal();

    return 0;
}