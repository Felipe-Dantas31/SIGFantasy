#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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