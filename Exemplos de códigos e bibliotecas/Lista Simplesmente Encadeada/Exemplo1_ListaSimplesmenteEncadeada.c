#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do elemento/no de uma lista composto pela variável 
// que armazena o valor (info) e por um ponteiro para o 
// próximo elemento/no (prox).

typedef struct no {
	int info;
	struct no *prox;
}TNO;

TNO *inicializa(){
    return NULL;
}

TNO *insere_inicio(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    novo->prox = l;
    return novo;
}

TNO *insere_fim(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    // ????
}

TNO *insere_ordenado(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    // ????
}

void imprime(TNO *l){
    TNO *aux = l;
    while(aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}

int vazia(TNO *l){
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    // Declarando o ponteiro para o inicio da lista.
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
    l = insere_fim(l, 10); // l = novo
    l = insere_fim(l, 20);
    imprime(l);
}
