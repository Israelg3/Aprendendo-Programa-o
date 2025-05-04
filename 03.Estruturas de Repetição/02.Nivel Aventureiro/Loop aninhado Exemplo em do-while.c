#include <stdio.h>
 
int main() {
    int i = 1;
    do { //Loop externo
        int j = 1;  //Variavel local
        do {  //Loop Interno
            printf("%d\t", i * j);
            j++; //incremento loop interno
        } while (j <= 10); 
        printf("\n");
        i++;  //Incremento  loop externo
    } while (i <= 10); //condição externo
    return 0;
}