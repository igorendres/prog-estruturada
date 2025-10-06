#include <stdio.h>


struct soma {
    float n1, n2, total;
};

void somar (struct soma *s1){
    printf("Digite dois valores para o calculo com ponteiros: \n");
    scanf("%f%f", &(*s1).n1, &(*s1).n2);
    (*s1).total = (*s1).n1 + (*s1).n2;
    printf("Resultado do calculo com ponteiros: %.1f", (*s1).total);
}

float somador(struct soma s1) {
    printf("Digite dois valores para o calculo sem ponteiros: \n");
    scanf("%f%f", &s1.n1, &s1.n2);
    s1.total = s1.n1 + s1.n2;
    return s1.total;
}

int main (){
    float resultado;    
    struct soma soma1;
    resultado = somador(soma1);
    somar(&soma1);
    printf("\nResultado do calculo sem ponteiros: %.1f", resultado);
    return 0;



}