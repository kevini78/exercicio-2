#include <stdio.h>

int main() {
    double A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);
    printf("Digite o valor de D: ");
    scanf("%lf", &D);

    double maior = A;
    double menor = A;

    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }
    if (D > maior) {
        maior = D;
    }

    if (B < menor) {
        menor = B;
    }
    if (C < menor) {
        menor = C;
    }
    if (D < menor) {
        menor = D;
    }

    printf("O maior valor é: %lf\n", maior);
    printf("O menor valor é: %lf\n", menor);

    return 0;
}