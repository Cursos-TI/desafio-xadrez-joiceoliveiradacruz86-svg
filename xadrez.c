#include <stdio.h>

int main(){
    int i = 0;

    printf("***Jogo de Xadrez***\n");
    //Movimento da peça Torre 5 casas para a direita
    printf("\nMovimento da peça de Xadrez Torre:\n");
    while(i < 5){
        printf("Direita!\n");
        i++;
    }
    //Movimento da peça Bispo 5 casas para a esquerda e para cia, simulando andar na diagonal
    printf("\nMovimento da peça de Xadrez Bispo:\n");
    i = 0; //Reinicia o contator
    do {
        printf("Cima, Esquerda!\n");
        i++;
    } while(i <= 4);
    //Movimento da peça Rainha 8 casas para a esquerda
    printf("\nMovimento da peça de Xadrez Rainha:\n");

    for(i = 0; i < 8; i++){
        printf("Esquerda!\n");
    }

    return 0;

    /*Bispo: 5 casas na diagonal superior direita
      Torre: 5 casas para a direita
      Rainha: 8 casas para a esquerda*/

}
