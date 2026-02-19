#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca necessária para funções de Strings

#define COLUNAS 50 // Tamanho máximo de cada texto

#define LINHAS 10 // Tamanho máximo de itens que uma lista pode conter

typedef struct 
{
    char dados[LINHAS][COLUNAS];
    int quantidade;
} ListaEstatica;

// Funções da estrutura estática
void inicializaListaEstatica(ListaEstatica *lista);
void insereListaEstatica(ListaEstatica *lista, const char* texto);
void removeListaEstatica(ListaEstatica *lista, const char* texto);
void listaListaEstatica(const ListaEstatica *lista);

// Estrutura dinâmica
typedef struct No
{
    char* dado;
    struct No *proximo;
} No;



