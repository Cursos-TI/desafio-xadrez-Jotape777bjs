#include <stdio.h>


int main() {
    
    int movimento_rainha = 1, movimento_bispo = 1;

    while (movimento_rainha <= 8)
    {
        printf("Rainha se movendo %d casas a esquerda\n", movimento_rainha);
        movimento_rainha++;
    }
    
    printf("\n");

    do
    {
        printf("Bispo se movendo %d casas a cima\n", movimento_bispo);
        printf("Bispo se movendo %d casas para direita\n", movimento_bispo);
        movimento_bispo++;
    } while (movimento_bispo <= 5);
       
    printf("\n");

    for(int movimento_torre = 1; movimento_torre <= 5; movimento_torre++){
        printf("Torre se movendo %d casas a direita\n", movimento_torre);
    }
    
    printf("Encerramos nossas movimentações no jogo de hoje!\n");




    return 0;
}
