// Crie um programa que leia um número de 0 a 9 e exiba esse número por extenso.
// Exemplo:
// Entrada: 7
// Saída: Sete

#include <stdio.h>

const char* numberToString(int num);

int main()
{
    int num;

    printf("Digite um número entre 0 e 9: ");
    scanf("%d", &num);
    const char* numExt = numberToString(num);

    printf("Numero em STRING: %s\n", numExt);

    return main();
}

const char *numberToString(int num)
{
    switch (num)
    {
    case 0:
        return "Zero";
    case 1:
        return "Um";
    case 2:
        return "Dois";
    case 3:
        return "Três";
    case 4:
        return "Quatro";
    case 5:
        return "Cinco";
    case 6:
        return "Seis";
    case 7:
        return "Sete";
    case 8:
        return "Oito";
    case 9:
        return "Nove";
    default:
        printf("Numero invalido");
    }
}