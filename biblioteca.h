#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX 100

typedef struct Livro{
    int codigao;
    char nome[50];
    char genero[20];
    struct Livro *proximo;
} Livro;


void inicializa_lista(Livro **inicio);
void insere_livro(Livro **inicio);
void remove_livro(Livro **inicio, int codigo);
void exibe_lista(Livro *inicio);
//void salva_lista(Livro *inicio);
//void limpa_lista(Livro **inicio);

#endif