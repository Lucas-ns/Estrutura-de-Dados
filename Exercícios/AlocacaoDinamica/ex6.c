#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome[30], nasc[11], cpf[11];
}Pessoa;

void preencher_pessoa(Pessoa *pessoa) {
    printf("Nome: ");
    scanf("%s", pessoa->nome);
    printf("Data de nascimento: ");
    scanf("%s", pessoa->nasc);
    printf("CPF: ");
    scanf("%s", pessoa->cpf);
}

void imprimir_pessoa(Pessoa *pessoa){
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de nascimento: %s\n", pessoa->nasc);
    printf("CPF: %s\n", pessoa->cpf);
}

int main() {
    Pessoa *pessoa = (Pessoa*) malloc(sizeof(Pessoa));
    preencher_pessoa(pessoa);
    imprimir_pessoa(pessoa);
    free(pessoa);
}