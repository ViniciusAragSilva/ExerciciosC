/*
EXERCICIO 1 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que l� valores para um vetor de
  17 posi��es e o escreve. Escreva, a seguir, 
  somente os n�meros primos deste vetor. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   // biblioteca que contem os arquivos de tempo, usados para realizar numeros aleatorios
    
int main()
{
    int numeroprimo(int num, int cont, int i);
    int NumAleat[17];
    int x, primo1, primo2 ;
    
    setlocale(LC_ALL,"");
    srand(time(NULL));
    
     printf("Ser�o mostrados 17 numeros, e ser� feita a analise se � primo");
     printf("\n--------------------------------------------------------------------------\n");
    for(x=0; x<17; x++)
    {
         NumAleat[x] = (rand()%1001);
        printf("\n %d ", NumAleat[x]);
        numeroprimo(NumAleat[x], primo1, primo2);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
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
    if(cont== 0)
        {printf(" : esse � primo ");}
   }



