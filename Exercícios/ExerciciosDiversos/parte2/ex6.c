#include <stdio.h>

int delta(int a, int b, int c){
    int equacao;
    equacao = b*b - 4*a*c;
    return printf("O valor de delta é %d.\n", equacao);
}

int main (){
    delta(2, 5, -2);
}