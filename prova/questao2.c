#include <stdio.h>
#include <string.h>

int main(){
    int countSalario = 0;
    float salario, media = 0.0, somaSalario = 0;
    char nome[10], nomeFim[100];
    strcpy(nomeFim, "FIM");
    salario = 0.0;
    do {  
        printf("Digite um nome: \t");
        scanf(" %[^\n]s", nome);
        if (strcmp(nome, nomeFim) != 0) {
            printf("Digite um salario: \t");
              scanf("%f", &salario);
            somaSalario = somaSalario + salario;
            countSalario++;
        }
    } while (strcmp(nome, nomeFim) != 0);

    media = somaSalario/countSalario;

    printf("Quantos funcionarios existem na empresa: %d\n", countSalario);
    printf("Media salarial: %f\n", media);

    return 0;
}