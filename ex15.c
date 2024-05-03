
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e imprima a matriz B, sendo que B = A2.

#include <stdio.h>

void main(){

	int A[5][5];
    	int B[5][5];
    
    	printf("Entre com os núumeros da matriz A 5x5:\n");
    	
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		scanf("%d", &A[i][j]);
        	}
    	}
    
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		B[i][j] = 0;
            		for(int k = 0; k < 5; k++) {
                
                		B[i][j] += A[i][k] * A[k][j];
            		}
        	}
    	}
    
    	printf("Matriz B:\n");
    
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		printf("%d ", B[i][j]);
        	}
        	printf("\n");
    	}

}

