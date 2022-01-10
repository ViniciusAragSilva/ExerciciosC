/*
EXERCICIO 2 - LISTA DE VETORES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
Elabore um programa para ler valores para dois vetores, a[8] e b[8]. 
Transfira, a seguir, os valores lidos para um vetor c[16]. 
Exiba o vetor resultante, em um formato de 4 colunas por linha 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   
    
int main()
{
///////////////////// Declaracao de Variaveis //////////////////////////////////////////////
    int VetA[8], VetAl[8], x;
    int Vetc[16];
    
    setlocale(LC_ALL,"");
    srand(time(NULL));
    
     printf("\n Serão pedidos 8 numeros em dois conjuntos, e será feita a junção deles \n");
     printf("Digite os numeros agora:\n");
     printf("\nVETOR A ------------------------------------------------------------------------\n");
     
     //////////////////////////// FOR PARA O VETOR A //////////////////////////////////////////
     
    for(x=0; x<8; x++)
    {
        scanf("%d", &VetA[x]);
    }
    
    
    printf("\n O proximo vetor serão numeros aleatórios\n");
    printf("\nVETOR B ------------------------------------------------------------------------\n");
    
    /////////////////////////// FOR PARA O VETOR ALEATORIO ///////////////////////////////////
    
    for(x=0; x<8; x++)
    {
        VetAl[x] = (rand()%101);
         printf("%d\n", VetAl[x]);
    }
    
    
    printf("\n A seguir, a resultante desses vetores\n");
    printf("\nVETOR C ------------------------------------------------------------------------\n");
    
    //////////////////////////////// RESULTANTE DOS DOIS VETORES /////////////////////////////////
    
     for(x=0; x<8; x++)
    {
        Vetc[x] = VetA[x];
         printf("               ");
         printf("%2d", Vetc[x]);
         
         if(x==3||x==7)
         {
             printf("\n");
         }
    }
     for(x=8; x<16; x++)
    {
        Vetc[x] = VetAl[x - 8];
        printf("               ");
         printf("%2d", Vetc[x]);
         if(x==11)
         {printf("\n");}
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////


