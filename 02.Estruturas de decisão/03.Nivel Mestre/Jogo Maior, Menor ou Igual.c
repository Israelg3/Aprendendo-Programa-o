#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar Número aleatório
    srand(time(0));
    numeroComputador = rand()% 100 + 1; //Número entre 1 e 100

    //Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual! \n");
    printf("Você deve escolher um número e o tipo de comparação. \n");
    printf("M. Maior \n");
    printf("N. Menor \n");
    printf("T. Igual \n");

    printf("Escolha a comparação: \n");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu número (Entre 1 e 100): \n");
    scanf(" %d", &numeroJogador);

    // Exibir número do computador
    //printf("O número do computador é: %d \n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior! \n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor! \n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual! \n");
        resultado = numeroJogador = numeroComputador ? 1 : 0;
        break;    
    
    default: 
        printf("Opção de jog inválida! \n");
        break;
    }

    printf("O número do computador é: %d e o do Jogador e: %d \n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Parabéns, Você venceu! \n");
    }else
        printf("Infelizmente, Você perdeu! \n");
    


return 0;
}