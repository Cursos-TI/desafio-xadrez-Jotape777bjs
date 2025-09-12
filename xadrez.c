#include <stdio.h>


int main() {
    
    int movimento_rainha = 1, movimento_bispo = 1;//variaveis declaradas a varivale da torre não esta aqui por que usei ela no for
    int movimento_cavalo = 0;//variavel para a movimentação do cavalo


    while (movimento_rainha <= 8)//esse bloco tem a função de realizar os movimentos da rainha
    {
        printf("Rainha se movendo %d casas a esquerda\n", movimento_rainha);
        movimento_rainha++;
    }
    
    printf("\n");

    do//esse bloco faz o movimento do bispo
    {
        printf("Bispo se movendo %d casas a cima\n", movimento_bispo);
        printf("Bispo se movendo %d casas para direita\n", movimento_bispo);
        movimento_bispo++;
    } while (movimento_bispo <= 5);
       
    printf("\n");//para deixar legivel no terminal

    for(int movimento_torre = 1; movimento_torre <= 5; movimento_torre++){//faz o movimento da torre e por isso não declarei a variavel dela anteriomente por que ele tem que estar dentro do for para funcionar
        printf("Torre se movendo %d casas a direita\n", movimento_torre);
    }
    
    printf("\n");

    while (movimento_cavalo < 1)//repetição externa
    {
        for (int movi_cava = 1; movi_cava <= 2; movi_cava++)//retição interna
        {
            printf("Cavalo se movendo %d casas para baixo\n", movi_cava);
        }
        
        printf("Cavalo se movendo %d casas para a esquerda\n", movimento_cavalo);
        movimento_cavalo++;//incremento para que a condição da repetição externa se torne falsa
    }
    
    printf("Encerramos nossas movimentações no jogo de hoje!\n");
    



    return 0;
}
