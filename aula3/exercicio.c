#include <stdio.h>

int main() {
    int tipo_combustivel;

    printf("Digite o código do tipo de combustível (1-4): \n");
    printf("1 - Gasolina\n");
    printf("2 - Alcool\n");
    printf("3 - Diesel\n");
    printf("4 - GNV\n");
    printf("Sua opção: ");

    scanf("%d", &tipo_combustivel);
    switch (tipo_combustivel) {
        case 1:
            printf("O combustivel escolhido foi: Gasolina\n");
            break;
        case 2:
            printf("O combustivel escolhido foi: alcool\n");
            break;
        case 3:
            printf("O combustivel escolhido foi: Diesel\n");
            break;
        case 4:
            printf("O combustível escolhido foi: GNV\n");
            break;
        default:
            printf("Opção invalida\n");
            break;
    }

    return 0;
}