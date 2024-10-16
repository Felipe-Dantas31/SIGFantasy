#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char modulo_cliente(void) {
    char opcao_c;
    do {
        opcao_c = menu_cliente();
        switch(opcao_c) {
            case '1': cadastrar_cliente();
                      break;
            case '2': atualizar_cliente();
                      break;
            case '3': excluir_cliente();
                      break;
            case '4': pesquisar_cliente();
                      break;
        }
    } while(opcao_c != '0');
    return 0;
}
