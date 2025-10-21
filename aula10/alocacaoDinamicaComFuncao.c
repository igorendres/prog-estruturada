#include<stdio.h>
#include<stdlib.h>

void ler(int **mat, int *lin, int *col);
void imprimir(int **mat, int *lin, int *col);
int main() {
    int **mat,lin,col,x,y;
    printf("Quantidade de linhas e de colunas: ");
    scanf("%d%d",&lin,&col);
   
    mat=(int**)calloc(lin,sizeof(int*));
    if(mat==NULL) {
        exit(1);
    }
    for(x=0;x<lin;x++) {
        mat[x]=(int*)calloc(col,sizeof(int));
        if(mat[x]==NULL){
        exit(2);
        }
    }
    ler(mat,&lin,&col);
    imprimir(mat,&lin,&col);
    return 0;
}

    void ler(int **mat, int *lin, int *col) {
        int x,y;
        printf("\nPreencha a matriz com %d valores: ",*lin * *col);
        for(x=0;x<*lin;x++) {
            for(y=0;y<*col;y++) {
            scanf("%d",&mat[x][y]);
            }
        }

    }
    void imprimir(int **mat, int *lin, int *col) {
        int x,y;
        printf("\nMatriz: \n");
        for(x=0;x<*lin;x++) {
            for(y=0;y<*col;y++) {
                printf("%d ",mat[x][y]);
            }
            printf("\n");
        }
}
