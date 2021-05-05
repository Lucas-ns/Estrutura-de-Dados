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
    return l;
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

void libera(TNO *l){
    TNO *aux = l;
    while(aux != NULL){
        TNO *tmp = aux;
        aux = aux->prox;
        free(tmp);
    }
}


TNO *retira(TNO *l, int x){
    TNO *aux = l, *ant = NULL;
    // Procura elemento na lista - percorre a lista até encontrar o elemento ou chegar ao final dela.
    while((aux != NULL) && (aux->info != x)){
        ant = aux;
        aux = aux->prox;
    }

    // Atualizar o encadeamento. 
    // Testando se o elemento foi encontrado. Caso aux seja NULL o elemento não existe na lista.
    if(aux == NULL)
        return l;
    
    // Se o ant for NULL significa que o elemento a ser retirado é o primeiro. Caso contrário o elemento
    // a ser retirado está no meio ou no fim da lista.
    if(ant == NULL){
        l = aux->prox;
    }else{
        ant->prox = aux->prox;
    }

    // Remover elemento da lista e da memória;
    free(aux);
    return l;
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
    l = insere_fim(l, 30);
    l = insere_fim(l, 40);
    l = insere_fim(l, 50);
    printf("Lista após inserção - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    l = retira(l, 30);
    printf("Lista após retirar o 30 - Qtd Elementos: %d \n", obtem_qtd_elementos(l));
    imprime(l);
    libera(l);
}
