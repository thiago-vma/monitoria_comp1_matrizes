
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//exercício 7) Imagem ilustrativa

#include <stdio.h>

void main(){

	int matriz[10][10];
	
	for(int i = 0; i < 10; i++){
	
		for(int j = 0; j < 10; j++){
		
			if (i < j){
			
				matriz[i][j] = (2*i) + (7*j) - 2;
			
			} else {
			
				if(i == j){
				
					matriz[i][j] = (3*i*i) - 1;
				
				} else {
				
					matriz[i][j] = (4*i*i*i) + (5*j*j) + 1;
				
				}
			
			}
		
		}
	
	}
	
	for(int i = 0; i < 10; i++){
	
		for (int j = 0; j < 10; j++){
		
			printf("%d  ", matriz[i][j]);
		
		}
		
		printf("\n");
	
	}

}

