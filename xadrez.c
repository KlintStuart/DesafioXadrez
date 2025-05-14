#include <stdio.h>

#include <stdio.h>
int main() {
    // Mover a Torre 5 casa a direita 
    for ( int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

}

// Bispo (Diagonal Cima Direita)
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo: simula o movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno: simula o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//Torre para a Direita
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

int main() {
   // Movimento da TORRE usando recursão
    int casasTorre = 4;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do BISPO usando recursão + loops aninhados
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Movimento da RAINHA usando recursão
    int casasRainha = 3;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    __cpp_return_type_deduction
    
}
