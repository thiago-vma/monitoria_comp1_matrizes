
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores negativos ela possui.

#include <stdio.h>

void main(){

	int matriz[4][4];
    	int i, j, cont = 0;

    	printf("Entre com os valores da matriz 4x4:\n");
    
    	for (i = 0; i < 4; i++) {
        	for (j = 0; j < 4; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 0; i < 4; i++) {
        	for (j = 0; j < 4; j++) {
            
            		if (matriz[i][j] < 0) {
                	
                		cont++;
            		}
        	}
    	}
    	
    printf("A matriz possui %d valores negativos\n", cont);

}
