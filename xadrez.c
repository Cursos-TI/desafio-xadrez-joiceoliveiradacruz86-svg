#include<stdio.h>

void movimentoTorre(int casas){
    if(casas > 0) {
        printf("Direita!\n");
        movimentoTorre(casas - 1);
    }
}
void movimentoRainha(int casas){
    if(casas > 0) {
        printf("Esquerda!\n");
        movimentoRainha(casas - 1);
    }
}
void movimentoBispo(int casas){
    if(casas > 0) {
        printf("Cima, Direita!\n");
        movimentoBispo(casas - 1);
    }
}

void moverCavalo(int movimentos){
    int i, j;

    for (i = 0; i < movimentos; i++) {
        for (j = 0; j < 2; j++) {
            printf("Cima!\n");
        }
        printf("Direita!\n");
    }
}

int main(){
    printf("***Jogo de xadrez***\n");
    printf("Movimento da peça de Xadrez Torre:\n");
    movimentoTorre(5);

    printf("\nMovimento da peça de Xadrez Rainha:\n");
    movimentoRainha(8);
    
    printf("\nMovimento da peça de Xadrez Bispo:\n");
    movimentoBispo(5);
    
    printf("\nMovimento da peça de Xadrez Cavalo:\n");
    moverCavalo(1);


    return 0;
}
