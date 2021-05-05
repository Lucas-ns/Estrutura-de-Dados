#include <stdio.h>
#include <math.h>

int nuloOuNao(int a) {
    if (a == 0)
    {
        return printf("O valor digitado é nulo!\n");
    }
    else
    {
        return printf("O valor digitado foi %d!\n", a);
    }
}

int primeiroPeloSegundo(int a, int b) {
    if (a % b == 0)
    {
        return printf("O segundo valor é divisível pelo primeiro!\n");
    }
    else
    {
        return printf("O segundo valor não é divisível pelo primeiro!\n");
    }
}

int delta(int a, int b, int c){
    int res;
    res = b*b - 4*a*c;
    return res;
}

int main() {
    int a, b, c;
    double del, x1, x2, termo1x1, termo2x1, termo1x2, termo2x2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a != 0)
    {
        del = delta(a, b, c);
        if (del >= 0)
        {
            x1 = (-b + sqrt(del)) / (2 * a);
            x2 = (-b - sqrt(del)) / (2 * a);
            printf("As raízes são %.1f e %.1f\n", x1, x2);
        }
        else
        {
            termo1x1 = (-b / (2 * a));
            termo2x1 = - (sqrt(del * -1) / (2 * a));
            termo1x2 = (-b / (2 * a));
            termo2x2 = - (sqrt(del * -1) / (2 * a));
            printf("Como delta é negativo, as raízes não fazem parte do conjunto dos reais, x' = %.1f - %.1fi e x'' = %.1f + %.1fi\n", termo1x1, termo2x1, termo1x2, termo2x2);
        }
        
    }
    else
    {
        printf("O coeficiente 'a' deve ser diferente de 0!\n");
    }
}