#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "biblioteca.h"

void limpa_lista(Livro **inicio){
    
}

void salva_lista(Livro *inicio){
    //salvar em arquivo
}

void inicializa_lista(Livro **inicio){
    *inicio = NULL;
}

void insere_livro(Livro **inicio){
    Livro *novo_livro = (Livro*)malloc(sizeof(Livro));
    if(novo_livro == NULL){
        printf("falha na alocacao de memoria\n");
        exit(0);
    }

    else{
        

        printf("Digite o codigo do livro:\n");
        scanf("%d", &novo_livro->codigo);
        getchar();

        printf("Digite o nome do livro:\n");
        fgets(novo_livro->nome, 50, stdin);
        strtok(novo_livro->nome, "\n");

        printf("Digite o genero do livro:\n");
        fgets(novo_livro->genero, 20, stdin);
        strtok(novo_livro->genero, "\n");

        
        novo_livro->proximo = *inicio;
        *inicio = novo_livro;
        printf("%s inserido com sucesso!", novo_livro->nome);
    }
}

void remove_livro(Livro** inicio, int codigo) {
    Livro* atual = *inicio;
    Livro* anterior = NULL;

    while (atual != NULL && atual->codigo != codigo) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Livro não encontrado.\n");
        return;
    }

    if (anterior == NULL) {
        *inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    printf("Livro removido com sucesso.\n");
}


void exibe_lista(Livro* inicio){
    if(inicio == NULL){
        printf("a lista  esta vazia");
    }
    else{
        printf("=================== listas de livros cadastrados ===================\n");
        while(inicio != NULL){
            //mostrar lista
            inicio = inicio->proximo;
        }
        printf("=========================== fim da lista ===========================\n");
    }
}

