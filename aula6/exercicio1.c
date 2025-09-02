#include <stdio.h>

// Fazer um programa que recebe três valores do usuário e depois encontra o maior e o menor número. 
// Construa duas funções, uma para determinar o maior número e outra para determinar o menor número.



int maiorValor(int num1, int num2, int num3) {
    int maiorValor = num1;

    if(num2 > maiorValor){
        maiorValor = num2;
    
    }
    if(num3 > maiorValor){
        maiorValor = num3;
    }

    return maiorValor;
}
int menorValor(int num1, int num2, int num3) {
    int menorValor = num1;

    if(num2 < menorValor) {
        menorValor = num2;
    
    }
    if(num3 < menorValor){
        menorValor = num3;
    }

    return menorValor;
}

int main() {
    int num1, num2, num3, maiorNum, menorNum;
    
    printf("Digite 3 valores em sequencia: \n");
    printf("Primeiro valor: \n");
    scanf("%d", &num1);
    printf("Segundo: \n");
    scanf("%d", &num2);
    printf("Terceiro: \n");
    scanf("%d", &num3);


    maiorNum = maiorValor(num1,num2,num3);
    menorNum = menorValor(num1,num2,num3);

    printf("Maior valor encontrado: %d\n", maiorNum);
    printf("Menor valor encontrado: %d\n", menorNum);

    return 0; 
}
