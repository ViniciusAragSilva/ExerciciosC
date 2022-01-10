/*
EXERCICIO 4 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
Escreva um algoritmo que lê um vetor A[10] e escreva 
a posição de cada elemento igual a 10 deste vetor. 
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    srand(time(NULL));
	setlocale (LC_ALL,"");
	int Valor[10], x;
	
	
	  for(x =0; x <10; x++)  // esse FOR limita a contagem ao intervalo dado
        {
            scanf("%d", &Valor[x]);
            
            if(Valor[x]== 10)   //se o valor, no momento em que x for tal numero, ser igual a 10
                {
                    
                     printf("^--- este valor é 10, na posição %d", x+1);        //printa que o valor é 10 e na posição x + 1
                    
                }
                printf("\n");       
        }	
}
