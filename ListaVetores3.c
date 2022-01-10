/*
EXERCICIO 3 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Elabore um programa que lê 30 valores inteiros para um vetor. 
 Encontre o menor e o maior valor deste vetor, exibindo-os com a sua posição.
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
	int Valor[30];
	int MaiorA = 0, MenorA = 1000, x, PosMA, PosME;
	
	
	  for(x =0; x <30; x++)  // esse FOR limita a contagem ao intervalo dado
        {
            Valor[x]= (rand()%101);
            printf(" %2d ", Valor[x]);

            if(Valor[x]< MenorA)
                {
                    
                    MenorA = Valor[x];
                    PosME= x + 1;
                    
                }         
            if(Valor[x] > MaiorA)
                {
                    MaiorA = Valor[x];
                    PosMA = x + 1;
                }

        }	
      printf("\n--> %d é o MAIOR Numero desse vetor, na posição %d \n", MaiorA, PosMA);
      printf("\n--> %d é o MENOR Numero dessa série, na posição %d \n", MenorA, PosME);
}
