#include <stdio.h>

int main() {
    
    // Movimento da Torre - usando for
    // A torre vai se mover 5 casas para a direita
   
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
   
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i); // imprime o número da casa
    }

    // Movimento do Bispo - usando while
    // O bispo se move 5 casas na diagonal para cima e direita
    
    int casasBispo = 5;
    int contador = 1;
    printf("Movimento do Bispo:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++; // incrementa o contador
    }

    // Movimento da Rainha - usando do-while
    // A rainha se move 8 casas para a esquerda
    int casasRainha = 8;
    int passo = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", passo);
        passo++;
    } while (passo <= casasRainha);

    return 0;
}