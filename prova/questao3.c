#include <stdio.h>
#include <string.h>


int temVogal(char nome[]);

int main() {
    char nome[10];
    strcpy(nome, "bola");
    printf("numero de vogais: %d", temVogal(nome));

    return 0;
}

int temVogal(char nome[]) {
    int vog = 0;
    for (int i = 0; i < 10; i++) {
        if (nome[i] == 'a' 
        || nome[i] == 'e' 
        || nome[i] == 'i' 
        || nome[i] == 'o' 
        || nome[i] == 'u' 
        || nome[i] == 'A' 
        || nome[i] == 'E' 
        || nome[i] == 'I' 
        || nome[i] == 'O' 
        || nome[i] == 'U') {
            vog++;
        }
    }
    return vog;
}