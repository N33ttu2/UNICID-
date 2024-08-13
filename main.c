#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 

int main(void) {
	setlocale(LC_ALL, "Portuguese");
    int tamanho;
    
    // Solicita o tamanho do bilhete ao usuário
    printf("Insira quantos números deseja no bilhete: "); // se for inserir de outra forma usar o do while
    printf("Insira quantos números deseja no bilhete: "); // se for inserir de outra forma usar o do while
    scanf("%d", &tamanho); //criação de tamanho

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
    
    // Estrutura depende da complexidade, escolher o mais simples.
    //Varias opções, dentre elas, vetor.
}

