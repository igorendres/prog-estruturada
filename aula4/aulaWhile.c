#include <stdio.h>
/*
    um programa que leia numeros ate o usuario digitar 0;
        após informe:
        - qntidade digitada
        - qntidade impares
        - qntidade negativos
*/
int main() {
    int n=0, cont=0, contImpar=0, contNeg=0;
    printf("\nDigite um numero inteiro ou 0 para sair: ");

    scanf("%d", &n);
    while (n!=0) {
        cont++;
        if(n%2!=0){
            contImpar++;
        }
        if(n<0){
            contNeg++;
        }
        printf("\nDigite um numero inteiro ou 0 para sair: ");
        scanf("%d", &n);
    };
    printf("\nTotal de numeros: %d\nQuantidade Impares: %d\nQuantidade negativos: %d", cont, contImpar, contNeg);
    return 0;

}