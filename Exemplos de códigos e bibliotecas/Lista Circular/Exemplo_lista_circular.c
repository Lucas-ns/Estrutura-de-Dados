#include <stdio.h>
#include "lista_circular.h"

int main(){
    // Declarando o ponteiro para o inicio da lista circular.
    TNO *l;
    // inicializando a lista l.
    l = inicializa();  // l = NULL

    // Verifica se a lista está vazia
    if(vazia(l)){
        printf("Lista Vazia\n");
    }else{
        printf("Lista com elementos\n");
    }
    // inserindo elemento 10 na lista l.
    l = inserir(l, 10); // l = novo
    l = inserir(l, 20);
    l = inserir(l, 30);
    l = inserir(l, 40);
    l = inserir(l, 50);
    printf("Lista após inserção - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    l = retira(l, 10);
    l = retira(l, 50);
    l = retira(l, 30);
    l = retira(l, 20);
    l = retira(l, 40);
    printf("Lista após retirar os elementos - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    l = libera(l);
}
