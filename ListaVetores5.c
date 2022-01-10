/*
EXERCICIO 5 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Escrever um algoritmo que lê um vetor X[10] e o escreve.
  Substitua, a seguir, todos os valores nulos de X por 1 e escreva novamente o vetor X. 
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale (LC_ALL,"");
	int Valor[10], x;
	
	 printf("\n//////////////// TABELAGEM DOS VALORES ///////////////\n");
	 for(x=0; x <10; x++)
        {
            scanf("%d", &Valor[x]);
        }
        
        printf("\n//////////////// TROCA DE 0 POR 1 ///////////////\n");
        for(x=0; x <10; x++)
        {
            if(Valor[x]== 0)
                {
                    Valor[x] = 1;
                }
            printf("%d \n", Valor[x]);
        }
}	

