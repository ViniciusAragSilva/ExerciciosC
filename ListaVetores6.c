/*
EXERCICIO 6 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Faça um algoritmo que leia 10 valores e os escreva
  na ordem contrária à que foram digitados. 
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale (LC_ALL,"");
	int Valor[10], rolaV[10], x, contra=9;  
	
	/*
	Valor[10] eh a array que vai de 0 a 9 espaços, que sera delimitada, 
	rolaV[10] é a contra array,
	contra será utilizado para fazer uma contagem inversa, posteriormente
	*/
	
	 printf("\n//////////////// TABELAGEM DOS VALORES ///////////////\n");
	 for(x=0; x <10; x++)               //FOR conta x ate 9, simbolizando os espaços do array Valor
        {   
            scanf("%d", &Valor[x]);        //a cada contagem, se eh dado um numero para valor
            rolaV[contra] = Valor[x];       //rolav por sua vez, utiliza-se do contra, em vez do x (quando x comeca em 0 e sobe, contra comeca em 9 e desce)
            contra--;
        }
        
     printf("\n//////////////// ARRAY NORMAL /////////////////////////////\n");
     for(x=0; x <10; x++)
        {printf("%2d      ", Valor[x]);}
        
     printf("\n//////////////// ARRAY CONTRARIA /////////////////////////\n");
     for(x=0; x <10; x++)
        {printf("%2d      ", rolaV[x]);}
}	
