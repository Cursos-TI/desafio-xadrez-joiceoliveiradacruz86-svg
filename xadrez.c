#include <stdio.h>

int main(){
    int i = 0;
    //Movimento da peça Torre 5 casas para a direita
    printf("Movimento da peça de Xadrez Torre:\n");
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
    //Movimento da peça Cavalo 2 casas para baixo e 1 casa para esquerda
    printf("\nMovimento da peça de Xadrez Cavalo:\n");
    i = 0; //Reinicia o contator
    while(i < 1){
        for(int j = 0; j < 2; j++){
            printf("Baixo!\n");
        }
        printf("Esquerda!\n");
        i++;
    }

    return 0;

    /*Bispo: 5 casas na diagonal superior direita
      Torre: 5 casas para a direita
      Rainha: 8 casas para a esquerda
      Cavalo: 2 casas para bairo e 1 casa  para esquerda */

}
