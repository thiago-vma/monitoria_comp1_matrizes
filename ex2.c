
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).

#include <stdio.h>

void main(){

	int matriz[4][4];
    	int i, j; //declarei a variavel universal pois utilizarei várias vezes
    	int maior, i_maior, j_maior;

    	printf("Entre com os elementos da matriz 4x4:\n");
    	
    	for (i = 0; i < 4; i++) {
        	for (j = 0; j < 4; j++) {
            
            		printf("Elemento [%d][%d]: ", i+1, j+1);
            		scanf("%d", &matriz[i][j]);
        	}
    	}

    	maior = matriz[0][0]; // parto da ideia de que o maior está na linha e coluna 0, mas isso pode mudar no loop
    	i_maior = 0;
    	j_maior = 0;

        for (i = 0; i < 4; i++) {
        	for (j = 0; j < 4; j++) {
            
            		if (matriz[i][j] > maior) { // caso seja maior que o set que fiz anteriormente, atualizo a variável
                		
                		maior = matriz[i][j];
                		i_maior = i;
                		j_maior = j;
            		}
        	}
    	}

    	printf("O maior valor é: %d\n", maior);
    	printf("Localizado na linha %d e coluna %d\n", i_maior+1, j_maior+1);

}
