#include <stdio.h>

int main()
{
    int inteiro = 10;
    int* ponteiro = &inteiro; // leia como "O ponteiro 'ponteiro' recebe o endereço de 'inteiro'"

    printf("Valor de inteiro: %d\n", inteiro);
    printf("Endereço de inteiro: %p\n", &inteiro);
    printf("O conteúdo de ponteiro (o endereço) é: %p\n", ponteiro);
    printf("O valor apontado por ponteiro é: %d\n", *ponteiro);

    *ponteiro = 20; // Essa linha permite a alteração do valor do guardado na variável apontada

    printf("\n**  Valores após a alteração via Ponteiro  **\n");
    printf("Valor de inteiro: %d\n", inteiro);
    printf("Endereço de inteiro: %p\n", &inteiro);
    printf("O conteúdo de ponteiro (o endereço) é: %p\n", ponteiro);
    printf("O valor apontado por ponteiro é: %d\n", *ponteiro);

    return 0;
}