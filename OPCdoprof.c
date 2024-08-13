#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	setlocale(LC_All, "Portuguese");
    int tamanho= 0;
    do{
    	printf("Insira quantos num deseja: ");
		printf("Inserir aleatoriamente dados no bilhete: ");
		scanf("d%",& tamanho);
	}while(!((tamanho> 5)&&(tamanho <= 15)));
	
	srand((unsigned) time(null);
	
	int bilhete[tamanho];
	int i;
	
	for(i = 0;i < tamanho; i;;){
		
		int num = (rand() % 60) + 1;
		int j, repetido = 0;
		for(j = (i - 1); j >= 0;j--){
			if(num == bilhete[j]){
				repetido = 1;
				break;
			}
		}
		if (repetido == 0)
			bilhete[i] = numero;
			else i--;
		}
		printf("\n");
		for(i = 0;i < tamanho; i++){
			printf("%d ",bilhete [i])
		}
		printf("\n");
	} // mais memoria, mem estática, menos -> mem dinamica //
	

