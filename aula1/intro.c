#include <stdio.h>

struct Person {
    char nome[30];
    int idade;
};



int main() {
    float n1, n2, soma;
    scanf("%f%f", &n1, &n2);
    soma = n1 + n2;
    printf("A soma de %2.f e %2.f é: %2.f", n1, n2, soma);
    return 0;
};