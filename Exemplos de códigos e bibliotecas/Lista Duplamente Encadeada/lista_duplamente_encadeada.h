#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do elemento/no de uma lista composto pela variável 
// que armazena o valor (info), por um ponteiro para o 
// próximo elemento/no (prox) e outro ponteiro para o 
// elemento/no anterior (ant).
typedef struct no {
	int info;
	struct no *prox;
    struct no *ant;
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
    novo->ant = NULL;
    if(l != NULL){
        l->ant = novo;
    }
    return novo;
}

TNO *insere_fim(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    novo->prox = NULL;
    // Passo 3 - Encadear o elemento na lista
    if(l == NULL){
        return novo;
    }

    // Percorrer a lista até o final, de forma que o aux aponte para o último elemento da lista.
    TNO *aux = l;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->ant = aux;
    novo->prox = NULL;

    return l;
}

TNO *insere_ordenado(TNO *l, int i){
    // Passo 1 - Alocação de memória para o novo elemento a ser inserido na lista.
    TNO *novo = (TNO*) malloc(sizeof(TNO));
    // Passo 2 - Armazena o valor no campo info.
    novo->info = i;
    // Passo 3 - Encadear o elemento na lista
    if(l == NULL)
        return novo;

    TNO *aux = l;

    if(aux->prox == NULL && aux->ant == NULL){
            if(novo->info < aux->info){
                l = novo;
                novo->ant = NULL;
                novo->prox = aux;
                aux->ant = novo;
            }
            return l;
        }
    while(aux != NULL){
        if(novo->info > aux->info && novo->info < aux->prox->info){
            novo->prox = aux->prox;
            novo->prox->ant = novo;
            aux->prox = novo;
            novo->ant = aux;
        }
        aux = aux->prox;
    }

    return l;
}

void imprime(TNO *l){
    TNO *aux = l;
    while(aux != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}

int obtem_qtd_elementos(TNO *l){
    TNO *aux = l;
    int i = 0;
    while(aux != NULL){
        i++;
        aux = aux->prox;
    }
    return i;
}

int vazia(TNO *l){
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

TNO* libera(TNO *l){
    TNO *aux = l;
    while(aux != NULL){
        TNO *tmp = aux;
        aux = aux->prox;
        free(tmp);
    }
    return NULL;
}


TNO *retira(TNO *l, int x){
    TNO *aux = l;
    // Procura elemento na lista - percorre a lista até encontrar o elemento ou chegar ao final dela.
    while((aux != NULL) && (aux->info != x)){
        aux = aux->prox;
    }
    // Testando se o elemento foi encontrado. Caso aux seja NULL o elemento não existe na lista.
    if(aux == NULL)
        return l;
    
    // Atualizar o encadeamento. 
    if(aux->prox == NULL && aux->ant == NULL)
        l = NULL;
    else if(aux->prox == NULL)
        // TNO *tmp = aux->ant;
        // tmp->prox = aux->prox; 
        aux->ant->prox = aux->prox; 
    else if(aux->ant == NULL){
        // TNO *tmp = aux->prox;
        // tmp->ant = aux->ant; 
        aux->prox->ant = aux->ant; 
        l = aux->prox;
    }
    else{
        aux->ant->prox = aux->prox; 
        aux->prox->ant = aux->ant; 
    }
        
    free(aux);
    return l;
}
