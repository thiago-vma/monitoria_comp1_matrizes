
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.

#include <stdio.h>

void main(){

	int matriz[5][5];
    	int soma = 0;
    
    	printf("Entre com os números da matriz 5x5:\n");
    	
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		scanf("%d", &matriz[i][j]);
        	}
    	}
    
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		if (i != j && i+j != 5-1) { //condição que pega os elementos fora das diagonais
                
                		soma += matriz[i][j];
            		}
        	}
    	}
    
    	printf("A soma é: %d\n", soma);
    	
}

