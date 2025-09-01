#include <stdio.h>
#include <string.h> 

/*
    ler nome de 8 alunos
    poder buscar se existe um nome
    depois fazer uma impressao a partir da primeira letra dos nomes
*/

#define L 8
#define C 30

int main()
{
    char nomes[L][C];
    char nome[C];
    int i, nomeExiste = 0;
    
    printf("Digite 8 nomes: ");
    for (i = 0; i < L; i++){
        scanf(" %29[^\n]s", nomes[i]);
    }

    printf("Digite um nome para ver se foi um dos nomes inseridos: \n");
    scanf("%s", nome);

    for (i = 0; i < L; i++){
        if(strcmp(nome, nomes[i]) == 0){
            nomeExiste = 1;
            break;
        }
    }
    if (nomeExiste) {
           printf("Nome encontrado! \n");
    } else {
            printf("Nome não encontrado! ://\n");
    }
    
    
    return 0;
}