/*
EXERCICIO 8 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que crie um vetor com 50 valores inteiros 
  entre 1 e 100.. Pesquise, a seguir, o vetor e: 
  a) Encontre e escreva o maior valor e sua posição; 
  b) Encontre e escreva o menor valor e sua posição; 
  c) Calcule e escreva a média aritmética dos valores lidos; 
  d) Escreva quantos são pares; 
  e) Escreva quantos são impares: 
  f) Exiba todos os números primos;

*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int primos [50];    // F

int main()
{
    srand(time(NULL));
    setlocale (LC_ALL,"");
    
    int numeroprimo(int num, int cont, int i, int x), cont, i;          // F
	int Master[50], x;                                                  // Vanilla
	int pares= 0, impares= 0;                                           // D e E
	int MaiorA= 0, MenorA= 1000, PosMA, PosME;                          // A e B. PosMe e Pos Ma são a POSição do MEnor e POSição do MAior
	float mediaA= 0;                                                    // C
	
	 printf("\nVETOR DE 50 VALORES RANDOMICOS\n");
    for(x=0; x <50; x++)
        {
            Master[x] = (rand()%100+1);
            printf("\n %3d", Master[x]);

/////////////////// DEFININDO QUAL O MAIOR E QUAL O MENOR ///////////////////////////////////////
             if(Master[x]< MenorA)
                {
                    MenorA = Master[x];
                    PosME= x + 1;
                }         
            if(Master[x] > MaiorA)
                {
                    MaiorA = Master[x];
                    PosMA = x + 1;
                }
                
 /////////////////// DEFININDO A MEDIA ARITMETICA (DPS SE DIVIDE POR 50) ////////////////////////              
            mediaA = (Master[x] + mediaA);
            
//////////////////// DEFININDO QUAIS SÃO OS NUMEROS PRIMOS NUMA ARRAY GLOBAL ////////////////////
            numeroprimo(Master[x], cont, i, x);
            
///////////////////// DEFININDO QUANTOS PARES E IMPARES COM UM IF E ATRIBUIÇAO //////////////////
            if(Master[x]%2 == 0)
            {pares++;}
            else
            {impares++;}
        }
        
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\n a)--> %2d é o MAIOR Numero desse vetor, na posição %d \n", MaiorA, PosMA);
    printf("\n b)--> %2d é o MENOR Numero desse vetor, na posição %d \n", MenorA, PosME);
    printf("\n c)--> %.2f é a MÉDIA Aritmética dessa série \n", mediaA/50);
    printf("\n d)--> %2d é o numero de valores PARES desse vetor\n", pares);
    printf("\n e)--> %2d São o numero de valores IMPARES desse vetor\n", impares);
    printf("\n f)--> Os primos são listado a seguir: \n");
    for(x=0; x<50; x ++)
    {
        if(primos[x] != 1)
        {
             if(primos[x]!= 0)
                {printf("\n %d ", primos[x]);}
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////

int numeroprimo(int num, int cont, int i, int x)
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
    if(cont== 0)
        {
            printf(" Primo ");
            primos[x] = num;
        }
   }
