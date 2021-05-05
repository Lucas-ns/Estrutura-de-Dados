#include <stdio.h>

int menu(){
    int escolha;
    printf("PROGRAMA PARA CÁLCULO DE ÁREA\n");
    printf("-----------------------------\n");
    printf("1 - Área de um círculo\n");
    printf("2 - Área de um retângulo\n");
    printf("3 - Área de um triângulo\n");
    printf("Qual é a figura geométrica? ");
    scanf("%d",&escolha);
    printf("-----------------------------\n");

    if (escolha == 1)
    {
        double raio, area;
        printf("Forneça o raio do círculo: ");
        scanf("%lf", &raio);
        area = areaCirculo(raio);
        return printf("A área da circunferência é %.1f\n", area);
    }
    else if (escolha == 2)
    {
        double area, base, altura;
        printf("Forneça a base do retângulo: ");
        scanf("%lf", &base);
        printf("Agora a altura: ");
        scanf("%lf", &altura);
        area = areaRetangulo(base, altura);
        return printf("A área do retângulo é %.1f\n", area);
    }
    else if (escolha == 3)
    {
        double area, base, altura;
        printf("Forneça a base do triângulo: ");
        scanf("%lf", &base);
        printf("Agora a altura: ");
        scanf("%lf", &altura);
        area = areaTriangulo(base, altura);
        return printf("A área do triângulo é %.1f\n", area);
    }
    else
    {
        printf("Opção escolhida foi inválida!\n");
    }
    
    
}

int areaCirculo(double raio){
    double area, r = raio;

    area = 2 * 3.14 * r;
    return area;
}

int areaRetangulo(double base, double altura){
    double area, b = base, h = altura;

    area = (b * h) / 2;
    return area;
}

int areaTriangulo(double base, double altura){
    double area, b = base, h = altura;

    area = (b * h) / 2;
    return area;
}

int main(){
    menu();
}