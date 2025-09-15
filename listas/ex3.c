#include <stdio.h>


#define LINHAS 3
#define COLUNAS 3

void lerMatriz(int matriz[][COLUNAS]) {
    int i, j;

    for (i = 0; i < LINHAS; i++){
        for(j=0; j< COLUNAS; j++){
            printf("digite o valor que vai para a posição ( %d, %d ): \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimeMatriz(int matriz[][COLUNAS]){
    int i, j;
    for (i = 0; i < LINHAS; i++){
        for(j=0; j< COLUNAS; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }        
}

int copiaPares(int matriz[][COLUNAS], int vetor[]){
    int i, j;
    int indiceVetor = 0;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] % 2 == 0) {
                vetor[indiceVetor] = matriz[i][j];
                indiceVetor++;
            }
        }
    }
    return indiceVetor;
}
void imprimeVetor(int vetor[], int qnt){
    if (qnt == 0) {
        printf("Nenhum numero par foi encontrado na matriz.\n");
    } else {
        int i;
        printf("Foram encontrados %d numeros pares\n", qnt);
        for (i = 0; i < qnt; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
}
int main() { 
    int matriz[LINHAS][COLUNAS];
    int vetorPares[LINHAS * COLUNAS];
    int qntPares;


    printf("--- Leitura dos Dados da Matriz ---\n");
    lerMatriz(matriz);

    printf("--- impressao da matriz ---\n");
    imprimeMatriz(matriz);
    qntPares = copiaPares(matriz, vetorPares);

    printf("--- VETOR DE PARES --- \n");
    imprimeVetor(vetorPares, qntPares);

    return 0;
}