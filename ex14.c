
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.

#include <stdio.h>

void main(){

	int matriz[5][5];
    	int soma_p = 0, soma_s = 0, soma_restante = 0, dif = 0;
    
    	printf("Entre com os números da matriz 5x5:\n");
    
    	for(int i = 0; i < 5; i++) {
        	for(int j = 0; j < 5; j++) {
            
            		scanf("%d", &matriz[i][j]);
        	}
    	}
    
    	for(int i = 0; i < 5; i++) {
        
        	soma_p += matriz[i][i]; //soma da diagonal principal
        	soma_s += matriz[i][5-1-i]; //soma da diagonal secundária
    	}
    
    	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
            
            		if (i != j && i+j != 5-1) {
                
                	soma_restante += matriz[i][j];
            		
            		}
        	}
    	}
    
    	dif = (soma_p + soma_s) - soma_restante;
    
   
    	printf("A diferença é: %d\n", dif);
   
}

