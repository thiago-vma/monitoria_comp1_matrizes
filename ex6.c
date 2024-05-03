
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal.

#include <stdio.h>

void main(){

	int matriz[3][3];
    	int i, j, soma = 0;

    	printf("Entre com os números da matriz 3x3:\n");
    
    	for (i = 0; i < 3; i++) {
        	for (j = 0; j < 3; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 0; i < 3; i++) {
        
        	soma += matriz[i][i]; //mesmo princípio do exercício que pedia para completar a diagonal princpipal com o número 1
    	}

    	printf("A soma dos valores da diagonal principal é: %d\n", soma);

}

