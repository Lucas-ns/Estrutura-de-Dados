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

int vazia(TNO *l){
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

TNO *inserir(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    // Caso a lista esteja vazia, o elemento inserido aponta para ele mesmo.
    if(vazia(l)){
        novo->prox = novo;
        return novo;
    }else{
        // Caso a lista possua elementos, o elemento inserido aponta para o "primeiro" (l).
        novo->prox = l->prox;
        l->prox = novo;
        return l;
    }
}

void imprime(TNO *l){
    TNO *aux;
    if(!vazia(l)){
        printf("%d\n", l->info);
        aux = l->prox;
        while(aux != l){
            printf("%d\n", aux->info);
            aux = aux->prox;
        }
    }
}

int obtem_qtd_elementos(TNO *l){
    TNO *aux;
    int i = 0;
    if(!vazia(l)){
        i++;
        aux = l->prox;
        while(aux != l){
            i++;
            aux = aux->prox;
        }
    }
    return i;
}

TNO *libera(TNO *l){
    if(vazia(l))
        return l;
    TNO *aux = l->prox;
    while(aux != l){
        TNO *tmp = aux;
        aux = aux->prox;
        free(tmp);
    }
    free(aux);
    return NULL;
}

TNO *retira(TNO *l, int x){
    if(vazia(l))
        return l;

    TNO *aux = l->prox, *ant = l;
    // Procura elemento na lista - percorre a lista até encontrar o elemento ou chegar ao final dela.
    while((aux != l) && (aux->info != x)){
        ant = aux;
        aux = aux->prox;
    }

    // Atualizar o encadeamento. 
    // Testando se o elemento foi encontrado. Caso aux seja l, ou o elemento não existe na lista,
    // ou ele é o primeiro da lista.
    if(aux == l){
        // Se for o primeiro refazer o encadeamento.
        if(aux->info == x){
            if(obtem_qtd_elementos(l) == 1){
                l = NULL;    
            }
            else{
                l = l->prox;
                ant->prox = l;
            }
            free(aux);
        }
        return l;
    }
            
    // O elemento a ser retirado está no meio ou no fim da lista.
    ant->prox = aux->prox;

    // Remover elemento da lista e da memória;
    free(aux);
    return l;
}
