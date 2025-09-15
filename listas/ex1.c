#include <stdio.h>


void exclamatorio(int n) {
    int linha, i;

    for (linha = 0; linha < n; linha++){
        for(i = 0; i <= linha; i++){
            printf("!");
        }
        printf("\n");
    }
}


int main() {
    int numLinhas;

    printf("Digite o numero de linhas a ser impresso: \n");
    scanf("%d", &numLinhas);

    if(numLinhas > 0){
        printf("\n");
        exclamatorio(numLinhas);
    } else {
        printf("Numero de linhas deve ser maior q zero.");
    }
    
    return 0;
}