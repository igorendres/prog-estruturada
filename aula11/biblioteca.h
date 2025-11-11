void leitura(int vet1[],int tam) {
    int x;
    for(x=0;x<tam;x++) {
        printf("\n Digite um inteiro: ");
        scanf("%i",&vet1[x]);
    }
}
void imprimir(int vet1[],int tam) {
    int x;
    for(x=0;x<tam;x++) {
        printf("\n%i",vet1[x]);
    }
}