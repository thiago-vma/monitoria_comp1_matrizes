
//Nome: Thiago Vinicius Macegoza
//Monitoria acadêmica: Computação 1
//Lista: Matrizes

//10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.

#include <stdio.h>

void main(){
    
	float matriz[10][3];
	int pior_p1 = 0, pior_p2 = 0, pior_p3 = 0;
    
    	printf("Entre com as notas dos alunos:\n");
    
    	for (int i = 0; i < 10; i++) {
        
        	printf("Aluno %d:\n", i + 1);
        	for (int j = 0; j < 3; j++) {
            
            		printf("Prova %d: ", j + 1);
            		scanf("%f", &matriz[i][j]);
        	}
    	}

    	for (int i = 0; i < 10; i++) {
        
        	if (matriz[i][0] < matriz[i][1] && matriz[i][0] < matriz[i][2]) { //comparo o valor das notas nas 3 provas, e o contador só aumentará se das 3, a pior nota for na coluna 0
            
            		pior_p1++;
            		
        	} else{ 
        	
        		if (matriz[i][1] < matriz[i][0] && matriz[i][1] < matriz[i][2]) { //contador aumentará se a pior nota for na coluna 1
            
            			pior_p2++;
        		} else { // em último caso, fica evidente que a pior nota está na coluna 2, então incremento na p3
            
            			pior_p3++;
        		}
    		}

	}
	
    	printf("A quantidade de alunos com a pior nota nas respectivas provas são:\n");
    	printf("Prova 1: %d\nProva 2: %d\nProva 3: %d\n", pior_p1, pior_p2, pior_p3);
    	
}

