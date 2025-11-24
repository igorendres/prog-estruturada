// void imprimir(int *numero, int matriz[][5]);
// float funcao_para(float *n1, float *n2);
#include <stdio.h>

#define TAM 256

typedef struct Disciplina {
    char nomeDisciplina[TAM], nomeProf[TAM];
    int semestre, cargaHoraria;
    float n1, n2, exame, nFinal;
    StatusDisciplina status;
}Disciplina;


int main(){

    void cadastrarNotas(Disciplina disciplinas[], int numDisciplinas) {
    char nomeBusca[TAM];
    printf("\nDigite o nome da disciplina para cadastrar as notas: ");
    fgets(nomeBusca, TAM, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';


    printf("Digite a nota 1 (N1): ");
    scanf("%f", &disciplinas[index].n1);
    printf("Digite a nota 2 (N2): ");
    scanf("%f", &disciplinas[index].n2);
    limparBuffer();

    printf("Notas cadastradas com sucesso!\n");
}

}