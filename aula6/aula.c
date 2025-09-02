#include <stdio.h>

//Passagem de parâmetros com vetor

void par(int num[]){
    int y;
    for(y=0;y<3;y++){
        if(num[y]%2==0)
            printf("\nO valor %d eh par.",num[y]);
        else
            printf("\nO valor %d eh impar.",num[y]);
    }
}

int main(){
    int n[3],x;

    for(x=0;x<3;x++){
        printf("Informe o numero: ");
        scanf("%d",&n[x]);
    }

    par(n);
    return 0;
}

