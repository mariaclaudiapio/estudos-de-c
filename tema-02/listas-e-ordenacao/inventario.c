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

// Estrutura dinâmica (lista encadeada)
typedef struct No
{
    char* dado;
    struct No *proximo;
} No;

typedef No* ListaDinâmica;

// Funções da estrutura dinâmica
void inicializaListaDinamica(ListaDinâmica *lista);
void insereListaDinâmica(ListaDinâmica *lista, const char* texto);
void removeListaDinâmica(ListaDinâmica *lista, const char* texto);
void listaListaDinâmica(const ListaDinâmica lista);
void liberaListaDinâmica(ListaDinâmica *lista);

// -----------------------------------------------------------------------
//   FUNÇÃO MAIN E MENUS
// -----------------------------------------------------------------------

void menuListaEstatica();
void menuListaDinamica();

int main()
{
    int opcao;
    do
    {
        printf("\n--- MANIPULAÇÃO DE LISTAS (TEXTO) ---\n");
        printf("1. Lista Estática\n");
        printf("2. Lista Encadeada\n");
        printf("0. Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                menuListaEstatica();
                break;
            case 2:
                menuListaDinamica();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}

// --- IMPLEMENTAÇÃO DAS FUNÇÕES ---
void inicializaListaEstatica(ListaEstatica *lista)
{
    lista->quantidade = 0;
}

void insereListaEstatica(ListaEstatica *lista, const char* texto)
{
    if(lista->quantidade == LINHAS)
    {
        printf("Erro: Lista cheia! Não é possível inserir.₢n");
        return;
    }

    stpcpy(lista->dados[lista->quantidade], texto);

    lista->quantidade++;
    printf("Texto \"%s\" inserido com sucesso.\n", texto);
}

void removeListaEstatica(ListaEstatica *lista, const char* texto)
{
    int i, pos = -1;

    for(i = 0; i < lista->quantidade; i++)
    {
        if(strcmp(lista->dados[i], texto) == 0)
        {
            pos = i;
            break;
        }
    }

    // Tratamento de erro: se o loop terminar e pos continuar -1, o item não foi encontrado
    if(pos == -1)
    {
        printf("Erro: Texto \"%s\" não encontrado na lista.\n", texto);
        return;
    }

    // retomar do minuto 11
}





