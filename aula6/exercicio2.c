#include <stdio.h>

//Escreva uma função de exponenciação cujos valores de base e de expoente são passados como parâmetros.
//Suponha que o expoente seja um inteiro positivo, diferente de zero, e a base seja um inteiro

 int exponenciador(int base, int expo) {
        int resultado = 1;
        if(expo < 0 || expo == 0) {
            printf("O expoente TEM que ser um inteiro positivo, diferente de zero");
            return 0;
        }
        for (int i = 0; i < expo; i++) {
            resultado *= base;
        }
        return resultado;
    }
int main(){
    int base, expo, num;
    
    printf("Digite em sequência um numero a ser exponenciado (a base) e em sequencia digite seu expoente: \n");
    printf("Base: \n");
    scanf("%d", &base);
    printf("Expoente: \n");
    scanf("%d", &expo);
    
    num = exponenciador(base,expo);
    printf("Numero pos exponenciar: %i\n", num);
}