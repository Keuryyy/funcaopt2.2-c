#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void vetorp(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        vetor[i] = rand() % 1000; 
    }
}

int verificacao(int vetor[], int tam, int numero) {
    for (int i = 0; i < tam; i++) {
        if (vetor[i] == numero) {
            return numero; 
        }
    }

}

int main() {
    srand(time(NULL)); 

    int tamVetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamVetor);

    int vetor[tamVetor];
    vetorp(vetor, tamVetor);

    int numeroUsuario;
    printf("Digite um número para verificar se está presente no vetor: ");
    scanf("%d", &numeroUsuario);

    int resultado = verificacao(vetor, tamVetor, numeroUsuario);

    if (resultado) {
        printf("O número %d está presente no vetor.\n", numeroUsuario);
    } else {
        printf("O número %d não está presente no vetor.\n", numeroUsuario);
    }

    return 0;
}
