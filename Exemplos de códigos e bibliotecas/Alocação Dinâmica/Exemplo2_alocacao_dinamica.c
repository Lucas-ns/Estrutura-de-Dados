#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da estrutura Produto contendo os atributos nome, codigo e preço.
typedef struct produto{
    char nome[30];
    int codigo;
    float preco;
}Produto;

void imprime_produto(Produto *p){
    printf("Nome: %s\n", p->nome);
    printf("Codigo: %d\n", p->codigo);
    printf("Preco: %.2f\n", p->preco);
}

Produto le_produto(){
    Produto p;
    //...
    return p;
}

int main(){
    // Declaração da variável do tipo Produto.
    Produto *p = (Produto*) malloc(sizeof(Produto));

    // Inicialização da variável p.
    p->codigo = 13205;  // ou p[0].codigo = 13205; 
    strcpy(p->nome, "pe de moleque");
    p->preco = 5.0;

    // Passagem de parâmetro por referência
    imprime_produto(p);
    //imprime_produto(p);
}