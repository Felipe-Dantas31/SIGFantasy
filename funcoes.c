#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcoes.h"

int verificardigito(int soma, int peso) {
    int resto = soma % 11;
    return (resto < 2) ? 0 : 11 - resto;
}

int verificarCPF(char* cpf) {

    char cpfNumeros[12];
    int j = 0;
    for (int i = 0; cpf[i] != '\0' && j < 11; i++) {
        if (isdigit(cpf[i])) {
            cpfNumeros[j++] = cpf[i];
        }
    }
    cpfNumeros[j] = '\0';

    
    if (strlen(cpfNumeros) != 11) {
        printf("CPF Invalido ");
        return 0; 
    }

    
    int todosIguais = 1;
    for (int i = 1; i < 11; i++) {
        if (cpfNumeros[i] != cpfNumeros[0]) {
            todosIguais = 0;
            break;
        }
    }
    if (todosIguais) {
        printf("CPF Invalido ");
        return 0; 
    }

    
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpfNumeros[i] - '0') * (10 - i);
    }
    int digito1 = verificardigito(soma, 10);
    if (digito1 != (cpfNumeros[9] - '0')) {
        printf("CPF Invalido ");
        return 0; 
    }

    
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpfNumeros[i] - '0') * (11 - i);
    }
    int digito2 = verificardigito(soma, 11);
    if (digito2 != (cpfNumeros[10] - '0')) {
        printf("CPF Invalido ");
        return 0; 
    }

    return 1; 
}

int verificarnome(char* nome){
    for(int i = 0; nome[i]!= '\0';i++){
        if(!isalpha(nome[i])){
            printf("Nome Invalido ");
            return 0;
        }
    }return 1;
}

int verificarfone(char* fone){
    char foneNumeros[15];
    int j = 0;
    for (int i = 0; fone[i] != '\0' && j < 14; i++) {
        if (isdigit(fone[i])) {
            foneNumeros[j++] = fone[i];
        }
    }
    foneNumeros[j] = '\0';

    if (strlen(foneNumeros) < 8) {
        printf("Telefone Invalido ");
        return 0; 
    }
    return 1;

}   