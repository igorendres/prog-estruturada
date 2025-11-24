#include <stdio.h>
#include <stdlib.h>

int encontrarMaior(int *vetor, int tamanho){
    int i, maior;

    printf("Digite os %d numeros do vetor: \n", tamanho);
    for( i=0; i< tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    maior = vetor [0];
    for (i = 0; i< tamanho; i++){
        if (vetor[i]>maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int tamanho, maior, *vetorM;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetorM = (int *)malloc(tamanho * sizeof(int));

    maior = encontrarMaior(vetorM, tamanho);

    printf("O maior numero encontrado foi: %d\n", maior);
    return 0;
}