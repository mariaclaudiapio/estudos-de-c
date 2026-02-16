#include <stdio.h>

void dobreValor(int valor)
{
    valor = valor * 2;
    printf("Dentro da função o valor é %d.\n", valor);
}


int main()
{
    int numero = 5;

    printf("Antes da função, o valor de 'numero' é: %d\n", numero);

    dobreValor(numero);

    printf("Depois da função o valor é de 'número' é %d.\n", numero);
    // O retorno aqui continuará sendo 05, porque a função não altera o valor armazenado em 'número'

    return 0;
}