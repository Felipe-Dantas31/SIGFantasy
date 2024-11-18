#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "produto.h"

char modulo_produto(void) {
    char opcao_p;
    do {
        opcao_p = menu_produto();
        switch(opcao_p) {
            case '1': cadastrar_produto();
                      break;
            case '2': atualizar_produto();
                      break;
            case '3': excluir_produto();
                      break;
            case '4': pesquisar_produto();
                      break;
        }
    } while(opcao_p != '0');
    return 0;
}

char menu_produto(void) {
    system("clear||cls");
    char op;
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                            Sis-Fantasy                                  @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                         * * * PRODUTO * * *                             @@@\n");
    printf("@@@                         1 * CADASTRAR PRODUTO                           @@@\n");
    printf("@@@                         2 * ATUALIZAR PRODUTO                           @@@\n");
    printf("@@@                         3 * EXCLUIR PRODUTO                             @@@\n");
    printf("@@@                         4 * PESQUISAR PRODUTO                           @@@\n");
    printf("@@@                         0 * VOLTAR                                      @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &op);
    getchar(); 
    return op;
}

void cadastrar_produto(void) {
    system("clear||cls");
    Produto* produto;
    produto = (Produto*) malloc(sizeof(Produto));

    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                 * * *  CADASTRAR PRODUTO   * * *                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


    printf("\nDigite o ID do Produto (apenas numeros): ");
    fgets(produto->id, 10, stdin);
    produto->id[strcspn(produto->id, "\n")] = '\0'; 

    printf("Digite o Nome: ");
    fgets(produto->nome, 50, stdin);
    produto->nome[strcspn(produto->nome, "\n")] = '\0';

    printf("Digite o Tipo: ");
    fgets(produto->tipo, 10, stdin);
    produto->tipo[strcspn(produto->tipo, "\n")] = '\0';

    printf("Digite o Preco: ");
    scanf("%f", produto->preco);
    getchar(); 
    
    printf("Digite a Quantidade em Estoque: ");
    scanf("%d", produto->quantidade);
    getchar(); 

    printf("\nProduto cadastrado com sucesso!\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void atualizar_produto(void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                  * * *  Atualizar Produto  * * *                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                         Em Desenvolvilmento                             @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}
void excluir_produto(void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                  * * *  Excluir Produto  * * *                          @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                         Em Desenvolvilmento                             @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}   

void pesquisar_produto(void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                  * * *  Pesquisar Produto  * * *                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                         Em Desenvolvilmento                             @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}
