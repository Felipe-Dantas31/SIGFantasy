#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char modulo_funcionario(void) {
    char opcao_f;
    do {
        opcao_f = menu_funcionario();
        switch(opcao_f) {
            case '1': cadastrar_funcionario();
                      break;
            case '2': atualizar_funcionario();
                      break;
            case '3': excluir_funcionario();
                      break;
            case '4': pesquisar_funcionario();
                      break;
        }
    } while(opcao_f != '0');
    return 0;
}



char menu_funcionario(void) {
    system("clear||cls");
    char op;
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                            Sis-Fantasy                                  @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                         * * * FUNCIONARIO * * *                         @@@\n");
    printf("@@@                         1 * CADASTRAR FUNCIONARIO                       @@@\n");
    printf("@@@                         2 * ATUALIZAR FUNCIONARIO                       @@@\n");
    printf("@@@                         3 * EXCLUIR FUNCIONARIO                         @@@\n");
    printf("@@@                         4 * PESQUISAR FUNCIONARIO                       @@@\n");
    printf("@@@                         0 * VOLTAR                                      @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &op);
    getchar(); 
    return op;
}



void cadastrar_funcionario(void) {
    system("clear||cls");
    char id[10], nome[50], cargo[30], telefone[15], email[50], endereco[100];

    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@               * * *  CADASTRAR FUNCIONARIO   * * *                      @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

   
    printf("\nDigite o ID do Funcionario (apenas numeros): ");
    fgets(id, 10, stdin);
    id[strcspn(id, "\n")] = '\0'; 

    printf("Digite o Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o Cargo: ");
    fgets(cargo, 30, stdin);
    cargo[strcspn(cargo, "\n")] = '\0';

    printf("Digite o Telefone: ");
    fgets(telefone, 15, stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("Digite o Email: ");
    fgets(email, 50, stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Digite o Endereco: ");
    fgets(endereco, 100, stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("\nFuncionario cadastrado com sucesso!\n");
    printf(">>> Tecle <ENTER> para continuar...\n");
    getchar();
}