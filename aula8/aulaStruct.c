#include <stdio.h>

#define T 3
struct soma {
    float vet[4], total;
};

int main() {
    struct soma somas[T];
    int x, y;
    for (x = 0; x < T; x++) {
        somas[x].total = 0;
        printf("Digite os valores do vetor na posicao %d: \n", x);
        for (y = 0; y < 4; y++ ){
            scanf("%f", &somas[x].vet[y]);
            somas[x].total = somas[x].total + somas[x].vet[y];
        }
    }
    for(x=0; x<T; x++){
        printf("\n Vetor posicao %d: ", x);
        for (y = 0; y < 4; y++ ) {
            printf("\nPrimeiro valor da soma=> %f", somas[x].vet[y]);
        }
        printf("\nTotal da soma = %f", somas[x].total);
    }
    return 0;
}