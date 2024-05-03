
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela.

#include <stdio.h>

void main(){

	int matriz[5][5];
    	int i, j;

    	for (i = 0; i < 5; i++) { //aqui estou setando tada a matriz para ficar zerada, e depois só altero a diagonal
        	for (j = 0; j < 5; j++) {
            		
            		matriz[i][j] = 0;
        	}
    	}

    	for (i = 0; i < 5; i++) { 
        
        	matriz[i][i] = 1; // a diagonal é formada pelos índices idêntidos, ou seja, mesmo indice na linha e coluna
    	//seria possível também fazer com dois laços for para linha e coluna, e dentro do ultimo laço colocar um if para altera o valor da diagonal quando i = j
    	}

    	printf("Matriz resultante:\n");
    	for (i = 0; i < 5; i++) {
        	for (j = 0; j < 5; j++) {
            
            		printf("%d ", matriz[i][j]);
        	}
        	
        	printf("\n");
    	
    	}
}
