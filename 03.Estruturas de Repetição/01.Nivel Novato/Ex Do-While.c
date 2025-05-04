#include <stdio.h>
 
int main() {
    int i = 1; //Variavel de incremento
   
    do { //Entrada (1x pelo menos)
        printf("%d\n", i); //Saida
        i++; // Incremente
    } while (i <= 5); //Condição
   
    return 0;
}