
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array

#include <stdio.h>

void main(){

	int matriz[3][3];
    	int vetor[3] = {0}; // Inicializo o vetor com zeros
    	int i, j;

        printf("Insira os elementos da matriz 3x3:\n");
    	
    	for (i = 0; i < 3; i++) {
        	for (j = 0; j < 3; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 0; i < 3; i++) {
        	for (j = 0; j < 3; j++) {
            
            		vetor[j] += matriz[i][j]; //vetor tem apenas um índice, que será respectivo ao numero da coluna
        	}
    	}

    	printf("Vetor de soma das colunas:\n");
    
    	for (i = 0; i < 3; i++) {
        
        	printf("%d ", vetor[i]);
    	}
    
    	printf("\n");

}

