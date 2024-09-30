

#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das fun��es
char menu_principal(void);
char modulo_cliente(void);
char menu_cliente(void);
void menu_funcionario (void);
void menu_produto (void);
void menu_aluguel(void);
void menu_relatorio(void);
void informacoes (void);
void cadastra_cliente (void);

/////
// Programa principal
int main(void) {
    /*char opcao;
    do{
        opcao = menu_principal();
        switch(opcao){

            case '1': modulo_cliente();
                        break;
            case '2': menu_funcionario();
                        break;
            case '3': menu_produto();
                        break;
            case '4': menu_aluguel();
                        break;
            case '5': menu_relatorio();
                        break;
            case '6': informacoes();
                        break;
        }
    }while(opcao != 0);*/
menu_principal();
menu_cliente();
menu_funcionario ();
menu_produto ();
menu_aluguel();
menu_relatorio();
informacoes ();
cadastra_cliente ();

    return 0;
}

/*void modulo_cliente(void){
    char opcao_c;
    do{
        
        opcao_c = menu_cliente();
        switch(opcao_c){

            case '1': cadastra_cliente();
                        break;
          
        }
    }while(opcao_c != 0);
    return 0;
}*/


/////
// Fun��es

char menu_principal(void) {
    system("clear||cls");
    char op;
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@             � � � SISTEMA DE ALUGUEIS DE VESTIMENTAS � � �              @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 � CLIENTE                                     @@@\n");
    printf("@@@                         2 � FUNCIONARIO                                 @@@\n");
    printf("@@@                         3 � PRODUTO                                     @@@\n");
    printf("@@@                         4 � ALUGEL                                      @@@\n");
    printf("@@@                         5 � RELATORIO                                   @@@\n");
    printf("@@@                         6 � INFORMACOES                                 @@@\n");
    printf("@@@                         0 � SAIR                                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    ///scanf("%c", &op);
    getchar();
    //return op;
}


char menu_cliente (void){
    system("clear||cls");
    char op;
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         � � �     CLIENTE   � � �                       @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 � CADASTRAR CLIENTE                           @@@\n");
    printf("@@@                         2 � ATUALIZAR CLIENTE                           @@@\n");
    printf("@@@                         3 � EXCLUIR CLIENTE                             @@@\n");
    printf("@@@                         4 � PESQUISAR CLIENTE                           @@@\n");
    printf("@@@                         0 � VOLTAR                                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    ///scanf("%c", &op);
    getchar();
    ///return op;
}

void cadastra_cliente (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         � � �  CADASTRAR CLIENTE   � � �                @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         CPF:                                            @@@\n");
    printf("@@@                         NOME:                                           @@@\n");
    printf("@@@                         DATA DE NACISMENTO:                             @@@\n");
    printf("@@@                         TELEFONE:                                       @@@\n");
    printf("@@@                         EMAIL:                                          @@@\n");
    printf("@@@                         ENDEREÇO:                                       @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    //scanf("%s",nc_add)
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menu_funcionario (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                        � � �   FUNCIONARIO   � � �                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 � CADASTRAR FUNCIONARIO                       @@@\n");
    printf("@@@                         2 � ATUALIZAR FUNCIONARIO                       @@@\n");
    printf("@@@                         3 � EXCLUIR FUNCIONARIO                         @@@\n");
    printf("@@@                         4 � PESQUISAR FUNCIONARIO                       @@@\n");
    printf("@@@                         0 � VOLTAR                                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menu_produto (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         � � �   PRODUTO   � � �                         @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 � CADASTRAR PRODUTO                           @@@\n");
    printf("@@@                         2 � ATUALIZAR PRODUTO                           @@@\n");
    printf("@@@                         3 � EXCLUIR PRODUTO                             @@@\n");
    printf("@@@                         4 � PESQUISAR PRODUTO                           @@@\n");
    printf("@@@                         0 � VOLTAR                                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menu_aluguel (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                      � � �  ALUGUEL  � � �                              @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 � FANTASIA                                    @@@\n");
    printf("@@@                         2 � ROUPA                                       @@@\n");
    printf("@@@                         0 � VOLTAR                                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menu_relatorio (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                      � � �  RELATORIO   � � �                           @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                         1 ° ALUGUEL                                     @@@\n");
    printf("@@@                         2 ° CLIENTES                                    @@@\n");
    printf("@@@                         3 ° FUNCIONARIO                                 @@@\n");
    printf("@@@                         4 ° ALUGUEL A DEVOLVER                          @@@\n");
    printf("@@@                         0 ° VOLTAR                                      @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void informacoes (void){
    system("clear||cls");
    printf("\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                             Sis-Fantasy                                 @@@\n");
    printf("@@@                      Developed By NIL and Felipe                        @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                    � � �  INFORMARCOES   � � �                          @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@                                                                         @@@\n");
	printf("@@@              Universidade Federal do Rio Grande do Norte                @@@\n");
	printf("@@@                  Centro de Ensino Superior do Seridó                    @@@\n");
	printf("@@@                Departamento de Computação e Tecnologia                  @@@\n");
	printf("@@@                   Disciplina DCT1106 -- Programação                     @@@\n");
    printf("@@@                                                                         @@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
