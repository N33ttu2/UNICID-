#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tamanho;
    
    // Solicita o tamanho do bilhete ao usuário
    printf("Insira quantos números deseja no bilhete: ");
    scanf("%d", &tamanho);

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    printf("Números gerados para o bilhete: ");

    // Declara a variável fora do loop para compatibilidade com C99
    int i;
    for(i = 0; i < tamanho; i++) {
        int numero = rand() % 60 + 1;
        printf("%d ", numero);
    }

    printf("\n");
    return 0;
}

