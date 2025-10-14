/* Faça um programa para calcular o percentual de votos de três candidatos que disputaram uma eleição.
Para isso, crie uma struct contendo o nome do candidato, o nome da sua chapa e o número de votos
obtidos na eleição.
Utilize esta struct para criar as três variáveis que irão representar os candidatos (não usar vetor) e na
implementação das seguintes funções que deverão ter seus parâmetros passados por referência (usar
ponteiros):
 Função para a leitura dos dados de cada um dos candidatos.
 Função para calcular o percentual de votos obtidos por cada um dos candidatos.
 Função para impressão dos percentuais de votos, juntamente com o nome e o partido de cada
candidato. Imprima também o total de votos da eleição*/

#include <stdio.h>

#define TAM 256
#define MAX 3

struct Candidato {
    char nome[TAM];
    char nomeChapa[TAM];
    int numVotos;
    float percentual
};

void lerCandidato(struct Candidato *pCand);
// void percentualVotos(struct Candidato *pCand);
// void mostraResultado(struct Candidato *Cand);


int main(){

    struct Candidato c1, c2, c3;
    printf("---Dados do Candidato 1---");
    lerCandidato(&c1);
    printf("---Dados do Candidato 2---");
    lerCandidato(&c2);
    printf("---Dados do Candidato 3---");
    lerCandidato(&c3);

    percentualVotos(&c1,&c2,&c3);
    mostraResultado(&c1,&c2,&c3);
    return 0;
}

void lerCandidato(struct Candidato *pCand) {
    printf("Digite o nome do candidato: ");
    scanf("%s", &pCand->nome);
    
    printf("Digite o nome da chapa do candidato: ");
    scanf("%s", &pCand->nomeChapa);

    printf("Digite a quantidade de votos do candidato: ");
    scanf("%d", &pCand->numVotos);
};

void percentualVotos(struct Candidato *pC1, struct Candidato *pC2, struct Candidato *pC3) {
    int total;
    total = pC1->numVotos + pC2->numVotos + pC3->numVotos;

    pC1->percentual = ((float)pC1->numVotos/total * 100.0f);
    pC2->percentual = ((float)pC2->numVotos/total * 100.0f);
    pC3->percentual = ((float)pC3->numVotos/total * 100.0f);
}

void mostraResultado(struct Candidato *pC1, struct Candidato *pC2, struct Candidato *pC3) {
    int total = pC1->numVotos + pC2->numVotos + pC3->numVotos;

    printf("------Resultado das votacoes------\t");

    printf("Candidato: %s (%s)\n", pC1->nome, pC1->nomeChapa);
    printf("Percentual de votos: %.2f%%\n\n", pC1->percentual);

    printf("Candidato: %s (%s)\n", pC2->nome, pC2->nomeChapa);
    printf("Percentual de votos: %.2f%%\n\n", pC2->percentual);

    printf("Candidato: %s (%s)\n", pC3->nome, pC3->nomeChapa);
    printf("Percentual de votos: %.2f%%\n\n", pC3->percentual);

    printf("----------------------------------\n");
    printf("Total de votos da eleicao: %d\n", total);
    printf("----------------------------------\n");
}

// void percentualVotos(struct )