#include <stdio.h>


void par(int num[][2]); //Protótipo da função com matriz
int main(){
    int m[2][2],x,y;

    for(x=0;x<2;x++){ //Leitura da matriz de números
        for(y=0;y<2;y++){
            scanf("%d",&m[x][y]);
        }
    }

    par(m); //Chamada da função
    return 0;
}

void par(int num[][2]){
    int x1,y1;
    for(x1=0;x1<2;x1++){
        for(y1=0;y1<2;y1++){
            if(num[x1][y1]%2==0)
                printf("\nO valor %d eh par.",num[x1][y1]);
            else
                printf("\nO valor %d eh impar.",num[x1][y1]);
        }
    }
}