#include <stdio.h>
 
int main() {
    int index;

    char * nomesAlunos [3][3] = {
        {"Aluno0", "Pt: 30", "Mat: 90"},
        {"Aluno1", "Pt: 60", "Mat: 60"},
        {"Aluno2", "Pt: 90", "Mat: 30"}

    };

    printf("Digite o numero do aluno que queira ver as notas: \n");
    printf("Para o Aluno 0 digite 0 \n");
    printf("Para o Aluno 1 digite 1 \n");
    printf("Para o Aluno 2 digite 2 \n");

    scanf("%d", &index);

    printf("As notas do Aluno %s são:0\n %s , %s. \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    
    return 0;
}