#include <stdio.h>
/*Escreva uma função que apresente um quadrado sólido de asteriscos cujo lado é especificado no parâmetro
inteiro lado. Por exemplo, se lado é 3, a função exibe:
* * *
* * *
* * */

void makeSquare(int lado){

    for(int i = 0; i < lado; i++){
        for ( int j = 0; j < lado; j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int tamanhoLado;

    printf("Digite o tamanho dos lados do quadrado: \n");
    scanf("%d", &tamanhoLado);

    if(tamanhoLado > 0){
        printf("\n");
        makeSquare(tamanhoLado);
    } else {
        printf("O tamanho do lado deve ser um numero positivo.\n");
    }
    return 0;
}