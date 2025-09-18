#include <stdio.h>

void recusivaLoop(int rainha){//função para o movimento da rainha
        if (rainha <= 8){
            printf("Rainha se movendo %d casas a esquerda\n", rainha);
            recusivaLoop(rainha + 1 );
        }
}

void recusivaloop2(int torre){
        if (torre <= 5){
            printf("Torre se movendo %d casas a direita\n", torre);
            recusivaloop2(torre + 1);
        }
}

void recusivaloop3(int bispo_direita){
        if(bispo_direita <= 5){
            printf("Bispo se movendo %d casas para cima\n", bispo_direita);
            recusivaloop3(bispo_direita + 1);
        }
}
    
int main() {
    
    int movimento_rainha = 1, movimento_bispo = 1;//variaveis declaradas a varivale da torre não esta aqui por que usei ela no for
    int movimento_cavalo = 1, movimento_torre = 1;//variavel para a movimentação do cavalo

        recusivaLoop(movimento_rainha);
    
    printf("\n");

    while (movimento_bispo <= 5){

        for (int movi_bispo = 1; movi_bispo <= 5; movi_bispo++)
        {
            printf("Bispo se movendo %d casas a direita\n", movi_bispo);
        }
        recusivaloop3(movimento_bispo);
        break;
    }
       
    printf("\n");//para deixar legivel no terminal

    recusivaloop2(movimento_torre);
    
    printf("\n");

   
    for (int movi_cava_cima = 2; movi_cava_cima <= 2;movi_cava_cima++)//for para utilizar estrutura avançadas de loop
    {   
        if (movi_cava_cima){
            printf("Cavalos se movendo %d casas para cima\n", movi_cava_cima);
            
        }else if (movi_cava_cima > 2){
                for (int movi_cava_direita = 1; movi_cava_direita <= 1;movi_cava_direita++){
                    printf("Cavalos se movendo %d casas para a direita\n", movi_cava_direita);
                }
        }
        
        
            for (int movi_cava_direita = 1; movi_cava_direita <= 1;movi_cava_direita++)
            {
                printf("Cavalos se movendo %d casa para a direita\n", movi_cava_direita);
            }
        
        
        
    }
        
      
    printf("Encerramos nossas movimentações no jogo de hoje!\n");
    



    return 0;
}
