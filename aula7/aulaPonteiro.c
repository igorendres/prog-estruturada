int main(){
int *px, x=100, q;
px = &x; //px recebe o endereço de x
q = *px; //q recebe o valor apontado por px
printf("px = %d\n", px); //imprime o endereço de x
printf("*px = %d\n", *px); //imprime o conteúdo da variável
 //apontada pelo ponteiro
printf("&px = %d\n", &px); //imprime o endereço de px
 printf("x = %d\n", x); //imprime o conteúdo de x
 printf("&x = %d\n", &x); //imprime o endereço da variável x
 printf("q = %d\n", q); //Imprime o conteúdo da variável q
return 0;
}