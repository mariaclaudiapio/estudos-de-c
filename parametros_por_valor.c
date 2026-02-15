#include <stdio.h>

void dobreValor(int valor)
{
    valor = valor * 2;
    printf("Dentro da função o valor é %d.\n", valor);
}


int main()
{
    int numero = 5;
    dobreValor(numero);
    printf("Fora da função o valor é %d.\n", numero);

    return 0;
}