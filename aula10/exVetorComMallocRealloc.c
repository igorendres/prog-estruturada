#include <stdio.h>
#include <stdlib.h>


int main() {
    int *vet, tam, tamNovos, total, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int*)malloc(tam*sizeof(int));
    if(vet==NULL) exit(1);
    printf("\nDigite %d de valores: ", tam);
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
    }
    printf("\n--Vetor-- \n");
    for(i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }
    printf("\nTamanho do vetor: %d", sizeof(vet));

// printando o tamanho dos tipos a fins academicos;  
    printf("\n\nTamanho do inteiro: %d", sizeof(int)); 
    printf("\nTamanho do double: %d", sizeof(double));
    printf("\nTamanho do float: %d", sizeof(float));
    printf("\n\nDigite a quantidade de valores adicionais ao vetor: ");
    scanf("%d",&tamNovos);
    total = tam + tamNovos;
    vet = (int*)realloc(vet, total*sizeof(int));
    printf("Digite %d novos valores: ", tamNovos);
    for(i=tam;i<total;i++){
        scanf("%d", &vet[i]);
    }
     printf("\n--Vetor atualizado--: \n");
    for(i=0;i<total;i++){
        printf("%d ", vet[i]);
        
    }
    free(vet);
    return 0;
}