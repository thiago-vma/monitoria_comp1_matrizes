
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundária.

#include <stdio.h>

void main(){

	int matriz[3][3];
    	int i, j, soma = 0;

    	printf("Entre com os valores da matriz 3x3:\n");
    
    	for (i = 0; i < 3; i++) {
        	for (j = 0; j < 3; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	for (i = 0; i < 3; i++) {
        	
        	soma += matriz[i][2 - i]; //vai subtraindo o máximo do indice da coluna pelo número respectivo da linha
    	}

    	printf("A soma é: %d\n", soma);

}

