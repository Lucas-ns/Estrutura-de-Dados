#include <stdio.h>
#include <stdlib.h>

typedef struct no{
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
    TNO *novo = (TNO *) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    novo->prox = NULL;
    // Passo 3 - Encadear o elemento na lista.
    if (l == NULL)
    {
        return novo;
    }

    // Percorrer a lista até o final, de forma que o aux aponte para o último elemento da lista.
    TNO *aux = l;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = novo;
    return l;
}

TNO *insere_ordenado(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    if (l == NULL)
    {
        return novo;
    }

    TNO *aux = l, *ant = NULL;
    while (aux != NULL && aux->info < i)
    {
        ant = aux;
        aux = aux->prox;
    }
    novo->prox = aux->prox;
    ant->prox = novo;
    return l;
}

void imprime(TNO *l){
    TNO *aux = l;
    while (aux != NULL)
    {
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}

int vazia(TNO *l){
    if (l == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    TNO *l;

    l = inicializa();
    // inserindo elemento 10 na lista l.
    l = insere_fim(l, 10); // l = novo
    l = insere_fim(l, 20);
    l = insere_ordenado(l, 15);
    imprime(l);
}