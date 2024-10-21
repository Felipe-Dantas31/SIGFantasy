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
    char id[10], nome[50], tipo[10];
    float preco;
    int quantidade;

    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                 * * *  CADASTRAR PRODUTO   * * *                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


    printf("\nDigite o ID do Produto (apenas numeros): ");
    fgets(id, 10, stdin);
    id[strcspn(id, "\n")] = '\0'; 

    printf("Digite o Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o Tipo: ");
    fgets(tipo, 10, stdin);
    tipo[strcspn(tipo, "\n")] = '\0';

    printf("Digite o Preco: ");
    scanf("%f", &preco);
    getchar(); 
    
    printf("Digite a Quantidade em Estoque: ");
    scanf("%d", &quantidade);
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
