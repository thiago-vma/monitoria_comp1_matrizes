
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma dos elementos dessa matriz que estão abaixo da diagonal principal.

#include <stdio.h>

void main(){

	int matriz[6][6];
    	int i, j, soma = 0;

	printf("Entre com os números da matriz 5x5:\n");
    
    	for (i = 0; i < 6; i++) {
        	for (j = 0; j < 6; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 1; i < 6; i++) { // aqui consigo garantir que a linha base pra começar a soma está sempre a baixo da coluna em que passa a diagona
        	for (j = 0; j < 6; j++) {  
            
            		soma += matriz[i][j];
        }
    }

    	printf("A soma é: %d\n", soma);

}
