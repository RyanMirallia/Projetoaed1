#include <stdio.h>
#include "biblioteca.h"

/*int main(){
    Livro* biblioteca = NULL;
    int opcao, codigo;

    inicializa_lista(&biblioteca);

    do {
        printf("\n===== Sistema de Biblioteca =====\n");
        printf("1. Inserir livro\n");
        printf("2. Remover livro\n");
        printf("3. Exibir todos os livros\n");
        printf("4. ");
        printf(". Sair\n");
        printf("Escolha uma opcaoo: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                insere_livro(&biblioteca);
                break;
            case 2:
                printf("digite o codigo do livro que deseja remover: ");
                scanf("%d", &codigo);
                remove_livro(&biblioteca, codigo);
                break;
            case 3:
                exibe_lista(biblioteca);
                break;
            case 4:
                printf("Saindo\n");
                break;
            default:
                printf("opcao invalida\n");
        }
    } while (opcao != 4);

    //salva lista
    //limpa lista

    return 0;
}*/