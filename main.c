#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 

int main(void) {
	setlocale(LC_ALL, "Portuguese");
    int tamanho;
    
    // Solicita o tamanho do bilhete ao usu�rio
    printf("Insira quantos n�meros deseja no bilhete: "); // se for inserir de outra forma usar o do while
    printf("Insira quantos n�meros deseja no bilhete: "); // se for inserir de outra forma usar o do while
    scanf("%d", &tamanho); //cria��o de tamanho

    // Inicializa o gerador de n�meros aleat�rios com base no tempo atual
    srand(time(NULL));

    printf("N�meros gerados para o bilhete: ");

    // Declara a vari�vel fora do loop para compatibilidade com C99
    int i;
    for(i = 0; i < tamanho; i++) {
        int numero = rand() % 60 + 1;
        printf("%d ", numero);
    }

    printf("\n");
    return 0;
    
    // Estrutura depende da complexidade, escolher o mais simples.
    //Varias op��es, dentre elas, vetor.
}

