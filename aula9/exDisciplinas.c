/*Construa um programa para gerenciar as 
informações sobre as disciplinas de seu curso (visão do aluno).
  Para isto, cada disciplina deve ser uma struct com as seguintes informações: 
  nome da disciplina, carga horária, professor,
   semestre, nota1, nota2, exame, nota final e situação do aluno (cursando, aprovado, reprovado, pendente).

Seu programa deve ter, ao menos, as seguintes funções:

Inserir disciplina: Cadastrar uma disciplina de cada vez, informando somente nome,
 carga horária, semestre e situação(não informar o professor, nem as notas).
Cadastrar professor: Definir o professor de uma disciplina, através de seu nome.
 Quando isto ocorrer, a situação da disciplina deve ser alterada para cursando. 
Cadastrar notas: Definir as notas em uma disciplina, através de seu nome.
Consolidar disciplinas. A consolidação deve determinar a nota final 
 das disciplinas que estão com situação "cursando" e atualizar a situação conforme a nota final.
Exibir disciplina: Exibir todas as informações de uma disciplina, através de seu nome.
Listar todas as disciplinas: Exibir nome e a situação de todas as disciplinas cadastradas.
Listar disciplinas pendentes: Exibir apenas o nome das disciplinas na qual o aluno ainda não foi aprovado.
Considerando que não se sabe a quantidade de disciplinas, determine um tamanho para o vetor e utilize somente o necessário.*/


#include <stdio.h> 
#include <string.h>
#include <ctype.h>


#define MAX_D 10
#define TAM 256
#define MEDIA_APROVACAO 7.0

typedef enum
{
    CURSANDO,
    APROVADO,
    REPROVADO,
    PENDENTE
} StatusDisciplina;


typedef struct Disciplina {
    char nomeDisciplina[TAM], nomeProf[TAM];
    int semestre, cargaHoraria;
    float n1, n2, exame, nFinal;
    StatusDisciplina status;
}Disciplina;


void limparBuffer();
const char* getStatusComoString(StatusDisciplina status);
int buscarIndexDisciplina(const char* nome, const Disciplina disciplinas[], int numDisciplinas);
void inserirDisciplina(Disciplina disciplinas[], int *pNumDisciplinas);
void cadastrarProf(Disciplina disciplinas[], int numDisciplinas);
void cadastrarNotas(Disciplina disciplinas[], int numDisciplinas);
void consolidarDisciplinas(Disciplina disciplinas[], int numDisciplinas);
void exibirDisciplina(const Disciplina disciplinas[], int numDisciplinas);
void listarTodasDisciplinas(const Disciplina disciplinas[], int numDisciplinas);


int main(){
    Disciplina disciplinas[MAX_D];
    int numDisciplinas = 0;
    int op;
    do {
        printf("\n--- GERENCIADOR DE DISCIPLINAS ---\n");
        printf("1. Inserir nova disciplina\n");
        printf("2. Cadastrar professor em uma disciplina\n");
        printf("3. Cadastrar notas de uma disciplina\n");
        printf("4. Consolidar notas e situacao\n");
        printf("5. Exibir detalhes de uma disciplina\n");
        printf("6. Listar todas as disciplinas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        limparBuffer();

        switch (op) {
            case 1:
                inserirDisciplina(disciplinas, &numDisciplinas);
                break;
            case 2:
                cadastrarProf(disciplinas, numDisciplinas);
                break;
            case 3:
                cadastrarNotas(disciplinas, numDisciplinas);
                break;
            case 4:
                consolidarDisciplinas(disciplinas, numDisciplinas);
                break;
            case 5:
                exibirDisciplina(disciplinas, numDisciplinas);
                break;
            case 6:
                listarTodasDisciplinas(disciplinas, numDisciplinas);
                break;
            case 0:
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (op != 0);
    return 0;
}

void inserirDisciplina(Disciplina disciplinas[], int *pNumDisciplinas) {
      if (*pNumDisciplinas >= MAX_D) {
        printf("Erro: Limite de disciplinas atingido!\n");
        return;
    }

    Disciplina *pDisc = &disciplinas[*pNumDisciplinas];

    printf("---CADASTRO DE DISCIPLINAS---\t\n");
    
    printf("Digite o nome: \n");
    fgets(pDisc->nomeDisciplina, TAM, stdin);
    pDisc->nomeDisciplina[strcspn(pDisc->nomeDisciplina, "\n")] = '\0';

    printf("Digite a carga horaria: \n");
    scanf("%d", &pDisc->cargaHoraria);

    printf("Digite o semestre: \n");
    scanf("%d", &pDisc->semestre);

    printf("Situacao definida automaticamente para PENDENTE. \n");
    pDisc->status = PENDENTE;

    (*pNumDisciplinas)++;
}

void cadastrarProf(Disciplina disciplinas[], int numDisciplinas) {
    char nomeBusca[TAM];
    printf("\nDigite a disciplina que deseja adicionar o professor:");
    fgets(nomeBusca, TAM, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    int index = buscarIndexDisciplina(nomeBusca, disciplinas, numDisciplinas);

    if (index == -1) {
        printf("\nDisciplina nao encontrada!\n");
        return;
    }

    printf("Digite o nome do professor: ");
    fgets(disciplinas[index].nomeProf, TAM, stdin);
    disciplinas[index].nomeProf[strcspn(disciplinas[index].nomeProf, "\n")] = '\0';

    disciplinas[index].status = CURSANDO;
    printf("Prof cadastrado, status alterado para CURSANDO.");  
}

void cadastrarNotas(Disciplina disciplinas[], int numDisciplinas) {
    char nomeBusca[TAM];
    printf("\nDigite o nome da disciplina para cadastrar as notas: ");
    fgets(nomeBusca, TAM, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    int index = buscarIndexDisciplina(nomeBusca, disciplinas, numDisciplinas);

    if (index == -1) {
        printf("Disciplina nao encontrada!\n");
        return;
    }

    if (disciplinas[index].status != CURSANDO) {
        printf("Acao nao permitida. A disciplina nao esta em andamento (CURSANDO).\n");
        return;
    }

    printf("Digite a nota 1 (N1): ");
    scanf("%f", &disciplinas[index].n1);
    printf("Digite a nota 2 (N2): ");
    scanf("%f", &disciplinas[index].n2);
    limparBuffer();

    printf("Notas cadastradas com sucesso!\n");
}

void consolidarDisciplinas(Disciplina disciplinas[], int numDisciplinas) {
    int consolidadas = 0;

    for(int i =0; i<numDisciplinas; i++) {
        if(disciplinas[i].status = CURSANDO) {
            disciplinas[i].nFinal = disciplinas[i].n1 + disciplinas[i].n2 / 2.0;

            if (disciplinas[i].nFinal >= MEDIA_APROVACAO) {
                disciplinas[i].status = APROVADO;
            } else {
                disciplinas[i].status = REPROVADO;
            }
            printf("Disciplina '%s' consolidada. Nota Final: %.2f. Situacao: %s\n",
                disciplinas[i].nomeDisciplina, disciplinas[i].nFinal, getStatusComoString(disciplinas[i].status));
            consolidadas++;
        }
    }
}

void exibirDisciplina(const Disciplina disciplinas[], int numDisciplinas) {
    char nomeBusca[TAM];

    printf("\nDigite a disciplina que deseja exibir:");
    fgets(nomeBusca, TAM, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    int index = buscarIndexDisciplina(nomeBusca, disciplinas, numDisciplinas);

    if (index == -1) {
        printf("\nDisciplina nao encontrada!\n");
        return;
    }

    const Disciplina *pDisc = &disciplinas[index];
   
    printf("\n---DETALHES DA DISCIPLINA---\n");
    printf("Nome: %s\n", pDisc->nomeDisciplina);
    printf("Professor: %s\n", pDisc->nomeProf);
    printf("Carga Horaria: %d horas\n", pDisc->cargaHoraria);
    printf("Semestre: %d\n", pDisc->semestre);
    printf("Situacao: %s\n", getStatusComoString(pDisc->status));
    if (pDisc->status != PENDENTE) {
        printf("Nota 1: %.2f\n", pDisc->n1);
        printf("Nota 2: %.2f\n", pDisc->n2);
        printf("Nota Final: %.2f\n", pDisc->nFinal);
    }
     

}

void listarTodasDisciplinas(const Disciplina disciplinas[], int numDisciplinas) {
    if (numDisciplinas == 0) {
        printf("\nNenhuma disciplina cadastrada.\n");
        return;
    }

    printf("\n--- LISTA DE TODAS AS DISCIPLINAS ---\n");
    for (int i = 0; i < numDisciplinas; i++) {
        printf("Disciplina: %-30s | Situacao: %s\n", disciplinas[i].nomeDisciplina, getStatusComoString(disciplinas[i].status));
    }
}
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

const char* getStatusComoString(StatusDisciplina status) {
    switch (status) {
        case CURSANDO: return "Cursando";
        case APROVADO: return "Aprovado";
        case REPROVADO: return "Reprovado";
        case PENDENTE: return "Pendente";
        default: return "Desconhecido";
    }
}

int buscarIndexDisciplina(const char* nome, const Disciplina disciplinas[], int numDisciplinas) {
    for (int i = 0; i < numDisciplinas; i++) {
        if (strcmp(nome, disciplinas[i].nomeDisciplina) == 0) {
            return i; 
        }
    }
    return -1;
}