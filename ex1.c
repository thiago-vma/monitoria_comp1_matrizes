
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor contido nessa matriz.

#include <stdio.h>

void main(){

	int matriz[3][3];
    	int menor;
    	
    	printf("Entre com os elementos da matriz 3x3:\n");
    
    	for (int i = 0; i < 3; i++) {
        
        	for (int j = 0; j < 3; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

	menor = matriz[0][0];

    	for (int i = 0; i < 3; i++) {
        
        	for (int j = 0; j < 3; j++) {
            
            		if (matriz[i][j] < menor) {
                
                		menor = matriz[i][j];
            		}
        	}
    	}
	
	printf("O menor valor na matriz é: %d\n", menor);

}
