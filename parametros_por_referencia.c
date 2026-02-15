#include <stdio.h>

void dobreValor(int *valor) // aqui é passado um ponteiro como parâmetro
{
    *valor = (*valor) * 2;
    printf("Dentro da função o valor é %d.\n", *valor);
}


int main()
{
    int numero = 5;

    printf("Antes da função, o valor de 'numero' é: %d\n", numero);

    dobreValor(&numero); // aqui é passado o endereço para acesso (e modificação) do valor da variável

    printf("Depois da função o valor é de 'número' é %d.\n", numero);
    // O retorno aqui será 10, porque a função altera o valor armazenado em 'número'

    return 0;
}