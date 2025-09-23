#include <stdio.h>

// Faça uma função que leia um número não determinado de valores
// reais positivos e retorna a média aritmética dos mesmos. Ao final, o
// programa principal deverá imprimir a quantidade de números lidos e a
// média. Utilize passagem de parâmetro por referência para o que for
// necessário. 


float medial(int *counter, float *media){
    *counter = 0;
    float soma = 0.0;
    int x = 0;
    do {
        printf("Digite um numero: \n");
        scanf("%f", &x);
        if(x>0){
        soma = (soma + x);
        (*counter)++;
        }
    } while (x > 0);

    return *media = soma / *media; 
}

int main () {
    float media;
    int count;

    medial(&count, &media);
    printf("%f | %i", media, count);
    return 0;

}