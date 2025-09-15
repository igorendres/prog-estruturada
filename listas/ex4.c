#include <stdio.h>
#include <string.h>


#define TAM_MAX 256

int contarSequencia(const char str[], char c1, char c2){
    int contador = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho - 1; i++) {
        if (str[i] == c1 && str[i + 1] == c2) {

            contador++;
        }
    }

    return contador;
}

int main() {
    char texto[TAM_MAX];
    
    char char1, char2;
    
    int contagem;


    printf("Digite uma frase ou texto:\n");

    fgets(texto, TAM_MAX, stdin);

    texto[strcspn(texto, "\n")] = 0;


    printf("\nDigite os dois caracteres a serem buscados (ex: t u): ");

    scanf(" %c %c", &char1, &char2);


    contagem = contarSequencia(texto, char1, char2);

    printf("\nA sequencia '%c%c' foi encontrada %d vez(es).\n", char1, char2, contagem);

    return 0;
}
