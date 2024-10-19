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
