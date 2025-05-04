#include <stdio.h>
 
int main() {
    int i = 1;
    while (i <= 10) { //Loop externo
        int j = 1; //Variavel Local
        while (j <= 10) {  
            printf("%d\t", i * j);
            j++; //Incremento
        }
        printf("\n");
        i++; //Incremento loop externo
    }
    return 0;
}