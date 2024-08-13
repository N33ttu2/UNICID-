#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define MAX_ENTRIES 100

// Criar uma lista de nome e endere�o
struct Entry { // struct para armazenar nome e endere�o
    char nome[100];
    char endereco[200];
};

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    struct Entry lista[MAX_ENTRIES];
    int total_entries = 0;
    
    // Exemplo de entrada.
    snprintf(lista[total_entries].nome, sizeof(lista[total_entries].nome), "M Silva");
    snprintf(lista[total_entries].endereco, sizeof(lista[total_entries].endereco), "Rua das Flores, 123, S�o Paulo, SP");
    total_entries++; // Incrementar o n�mero total de entradas ap�s adicionar uma entrada

    // Exibindo a lista
    for (int i = 0; i < total_entries; i++) { // Corrigido: a condi��o de loop
        printf("Nome: %s\n", lista[i].nome);
        printf("Endere�o: %s\n", lista[i].endereco); // Corrigido: Adicionado o ": " e "\n"
    }

    return 0;
}
}
	
