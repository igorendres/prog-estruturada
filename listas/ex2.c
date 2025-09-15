#include <stdio.h>


void converter(int h, int m, int s) {
    long int totalEmSegundos;

    totalEmSegundos = (h*3600L) + (m*60L) + s;

    printf("As horas minutos e segundos inseridos equivalem a %ld segundos", totalEmSegundos);
}
int main(){
    int seg, min, hr;
    printf("Digite horas, minutos e segundos. Um após o outro separando por espaços.");
    scanf("%d %d %d", &hr, &min, &seg);

    converter(hr, min, seg);
}