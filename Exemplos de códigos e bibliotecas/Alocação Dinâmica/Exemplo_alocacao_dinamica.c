#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
    char nome[30];
    int codigo;
    float preco;
}Produto;

int main(){
    /* Não é possível redimensionar as variáveis e vetores em tempo de execução.
    // Os exemplos abaixo caracterizam variáveis estáticas.
        int a;
        int v[100];
        int v[250];
        int v[10];
    */

    // alocação de uma variável dinâmica que contém capacidade para armazenar 100 valores inteiros
    int *v = (int*) malloc(10*sizeof(int)); // == int v[100] -- variável estática
    //float *v = (float*) malloc(100*sizeof(float));
    //char *v = (char*) malloc(100*sizeof(char));
    //Produto *v = (Produto*) malloc(100*sizeof(Produto));

    for(int i = 0; i < 10; i++){
        v[i] = i;
    }

    // Redimensionando o vetor v para armazenar até 200 valores inteiros   
    v = (int*) realloc(v, 5*sizeof(int));

    for(int i = 0; i < 5; i++)
        printf("%d %d\n", i, v[i]);

    // Liberando a variável dinâmica da memória
    free(v);
}