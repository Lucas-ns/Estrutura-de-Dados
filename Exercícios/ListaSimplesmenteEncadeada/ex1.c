#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int codigo;
    float preco;
    int qtd;
    struct no *prox;
}TNO;

TNO *inicia_lista(){
    return NULL;
}

void *inserir_produtos(TNO *l) {
    TNO *novo = (TNO *) malloc(sizeof(TNO));

    printf("Digite o código do produto: ");
    scanf("%d", &novo->codigo);
    printf("Digite o preço do produto: ");
    scanf("%f", &novo->preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novo->qtd);

    novo->prox = l;
}

void imprime(TNO *l){
    TNO *aux = l;
    while (aux != NULL)
    {
        printf("Código = %d\n", aux->codigo);
        printf("Preço = %f\n", aux->preco);
        printf("Quantidade = %d\n", aux->qtd);
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

    l = inicia_lista();
    inserir_produtos(l);
    imprime(l);
}