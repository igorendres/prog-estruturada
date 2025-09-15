#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define TAM_MAX 256


void lerFrase(char str[], int tamanho){
    printf("Digite uma frase: ");
    fgets(str, tamanho, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void separarString(const char original[], char letras[], char outros[]){
    int i;
    int indiceLetras = 0;
    int indiceOutros = 0;

    for (i = 0; i < strlen(original); i++) {
        if (isalpha(original[i])) {
            letras[indiceLetras] = original[i];
            indiceLetras++;                     
        } else {
            outros[indiceOutros] = original[i]; 
            indiceOutros++;                     
        }
    }
    letras[indiceLetras] = '\0';
    outros[indiceOutros] = '\0';
}

void imprimirString(const char str[]){
    printf("%s\n", str);
}



int main() {
    char fraseOriginal[TAM_MAX];
    char stringLetras[TAM_MAX];
    char stringOutros[TAM_MAX];

    lerFrase(fraseOriginal, TAM_MAX);

    separarString(fraseOriginal, stringLetras, stringOutros);

    printf("\n--- RESULTADOS ---\n");
    
    imprimirString("Frase Original:");
    imprimirString(fraseOriginal);

    imprimirString("\nString contendo somente as letras:");
    imprimirString(stringLetras);

    imprimirString("\nString contendo os outros caracteres:");
    imprimirString(stringOutros);

    return 0;
}
