/*
EXERCICIO 7 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Elabore um programa que lê valores inteiros para um 
 vetor de 12 posições e o escreva. Troque, a seguir, 
 somente os números primos deste vetor pelo valor “zero”. 
 Escreva o vetor resultante. 
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
    int numeroprimo(int num, int cont, int i);
	int Num[12], x, cont, i;  
	
	   printf("\n//////////////// TABELAGEM DE VALORES ///////////////\n");
	 for(x=0; x <12; x++)              
        {   
           scanf("%d", &Num[x]);
        }
        
           printf("\n//////////////// TROCA DE NUM PRIMOS POR 0 ///////////////\n");
     for(x=0; x <12; x++)
        {
           numeroprimo(Num[x], cont, i);
        }
        
        
}

/////////////////////////////////////////////////////////////////////////////////////

int numeroprimo(int num, int cont, int i)
{
    cont=0;

    for(i=2; i<=num/2; i++)
        {
            if(num%i== 0)
                {
                    cont++;
                    break;
                }
        }
        if(cont == 0)
        {
            printf(" 0\n");
        }else
        {
            printf(" %d\n", num);
        }
}
	
