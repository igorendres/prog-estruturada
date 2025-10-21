#include <stdio.h>
#include <stdlib.h>

int main (){
	int **mat,lin,col,l,c;
	printf("Quantas linhas e colunas:  ");
	scanf("%d%d", &lin,&col);
	mat = (int**)calloc(lin,sizeof(int*));
	if(mat==NULL){
	exit(1);
	}
	for(l=0;l<lin;l++){
		mat[l] = (int*)calloc(col,sizeof(int));
		if(mat[l] == NULL){
			exit(2);
		}
	}
	
	printf("\nDigite %d valores:  ",lin*col);
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			scanf("%d",&mat[l][c]);
		}
	}
	printf("\n---Matriz--- \n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%d ",mat[l][c]);
		}
		printf("\n");
	}
	for(l=0;l<lin;l++){
		free(mat[l]);
	}
	free(mat);
	return 0;
	}
	