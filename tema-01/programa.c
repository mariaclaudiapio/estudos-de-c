#include <stdio.h>

// Definição de uma estrutura "Aluno"
    struct Aluno
    {
        char nome[50];
        int idade;
        float media;
    };

    // uso do typedef para criação de um tipo "Aluno"
    typedef struct 
    {
        char nome[50];
        int idade;
        float media;
    } TipoAluno;


int main()
{
    printf("Hello, World!\n");

    // Criando e inicializando uma variável do tipo Aluno
    TipoAluno aluno1 = {"João", 20, 8.5};

    // Acessando os dados com o operador "."
    printf("Aluno: %s\n", aluno1.nome); 
    printf("Média: %.2f\n", aluno1.media);
}