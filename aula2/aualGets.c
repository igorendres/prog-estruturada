#include <stdio.h>

int main()
{
    char nome[40], frase[40];
    gets(nome);
    strcpy(frase, "Bom dia");
    strcat(frase," ");
    strcat(frase, nome);
    printf("Imprime nova frase: %s", frase);
}