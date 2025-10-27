#include <stdio.h>

int main() {

    // Movimento da Torre - usando for
    
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");


    // Movimento do Bispo - usando while

    int casasBispo = 5;
    int contador = 1;
    printf("Movimento do Bispo:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    printf("\n");

    
    // Movimento da Rainha - usando do-while
    
    int casasRainha = 8;
    int passo = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", passo);
        passo++;
    } while (passo <= casasRainha);

    printf("\n");

    
    // Movimento do Cavalo - loops aninhados
    // O cavalo vai se mover 2 casas para baixo e 1 casa para a esquerda
    
    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo (for): move o cavalo para baixo 2 vezes
    for (int i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo (%d)\n", i);

        // Loop interno (while): depois das duas casas, move 1 casa para a esquerda
        int j = 1;
        while (i == movimentoBaixo && j <= movimentoEsquerda) {
            printf("Esquerda (%d)\n", j);
            j++;
        }
    }

    return 0;
}