
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.

#include <stdio.h>

void main(){

	int matriz[5][5];
    	int i, j, soma = 0;

	printf("Entre com os números da matriz 5x5:\n");
    
    	for (i = 0; i < 5; i++) {
        	for (j = 0; j < 5; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 0; i < 5; i++) {
        	for (j = i + 1; j < 5; j++) { // com a operação "i + 1", é possível garantir que o índice da coluna sempre será maior do que o da linha, e como a linha diagonal é i = j, com j > i, consigo os elementos acima da linha
            
            		soma += matriz[i][j];
        }
    }

    	printf("A soma é: %d\n", soma);

}

