#include <stdio.h>

int quadrado(int *x) {
    return  *x * *x;
}
int cubo(int *x) {
    return  *x * *x * *x;
}
int main(){
    int num, *pnum, *ppnum;
    pnum = &num;
    ppnum = &pnum;

    scanf("%d", pnum);
    printf(" num: %d | pnum:  %d | ppnum: %d\n", num, pnum,ppnum);

    int quadrada = quadrado(pnum);
    int cuba = cubo(pnum);
    printf("Resultado AO QUADRADO--> %d\n", quadrada);
    printf("Resultado AO CUBO--> %d\n", cuba);

}
