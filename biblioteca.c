#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "biblioteca.h"



//ARQUIVO
void limpa_lista(Livro **inicio){
    Livro *atual = *inicio;
    while(atual != NULL){
        Livro *temp = atual->proximo;
        atual = atual->proximo;
        free(temp);
    } 
    *inicio = NULL;
}

void salva_lista(Livro *inicio){
    FILE *arquivo = fopen("livros.txt", "w");
    if(arquivo == NULL){
        printf("falha ao abrir o arquivo");
        return;
    }

    Livro *atual = inicio;
    while (inicio != NULL){
        fprintf(arquivo, "%d|%s|%s\n", atual->codigo, atual->nome, atual->genero);
        atual = atual->proximo;
    }

    fclose(arquivo);
    printf("lista salva com sucesso");
    
}

/*void carrega_lista(Livro **inicio){
    FILE *arquivo = fopen("livros.txt", "r");
    if(arquivo == NULL){
        printf("falha ao abrir o arquivo");
        return;
    }

    int codigo;
    char nome[50];
    char genero[20];

    while(fscanf(arquivo, "%d|%49[^|]|%19[^\n]\n", &codigo, nome, genero) == 3){
        Livro *novo = (Livro*) malloc(sizeof(Livro));
        if(novo == NULL){
            printf("falha na alocacao de memoria");
            fclose(arquivo);
            return;
        }

        novo->codigo = codigo;
        strcpy(novo->nome, nome);
        strcpy(novo->genero, genero);

        novo->proximo = *inicio;
        *inicio = novo;
    }

    fclose(arquivo);
}*/

//ARQUIVO




//LISTA

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
//LISTA

