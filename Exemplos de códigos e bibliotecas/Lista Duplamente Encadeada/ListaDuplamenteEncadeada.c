#include <stdio.h>
#include "lista_duplamente_encadeada.h"

int main(){
    // Declarando o ponteiro para o inicio da lista.
    TNO *l;

    // inicializando a lista l.
    l = inicializa();  // l = NULL
    if(vazia(l)){
        printf("Lista Vazia\n");
    }else{
        printf("Lista com elementos\n");
    }
    // inserindo elemento 10 na lista l.
    l = insere_fim(l, 10); // l = novo
    // l = insere_fim(l, 20);
    // l = insere_fim(l, 30);
    // l = insere_fim(l, 40);
    // l = insere_fim(l, 50);
    l = insere_ordenado(l, 22);

    
    printf("Lista após inserção - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    if(vazia(l)){
        printf("Lista Vazia\n");
    }else{
        printf("Lista com elementos\n");
    }
    l = retira(l, 50);
    printf("Lista após retirar o 50 - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    libera(l);
}
