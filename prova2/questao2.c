#include <stdio.h>

float calculaMedia(float numero1,float numero2, char situacao) {
    float media = (numero1 + numero2) / 2.0;
    if (media < 7.0) {
        situacao = 'R';
    } else {
        situacao = 'A';
    }
    return printf("Media: %f \n Situacao: %c", media, situacao);
}

int main(){
    char situacaoAluno;

    calculaMedia(7.0, 6.0, &situacaoAluno);
    return 0;
    
}