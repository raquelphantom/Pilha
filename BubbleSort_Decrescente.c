#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int TAMANHO_VETOR =5;
int vetor [5]= {1,5,4,2,3};

void mostrar(){
	int i;
	for(i=0; i<TAMANHO_VETOR; i++)
		printf("%i",vetor[i]);
}

void bubble_sort() 
{
  int i, j; float aux;
  for ( j = 0; j<TAMANHO_VETOR-1; j++) 
  {
    for ( i = 0; i<TAMANHO_VETOR-1-j; i++) 
    {
      if ( vetor[i] < vetor[i+1])//esse cara nessa posição é maior que a do lado?
      {
         aux 	   = vetor[i];//guarda valor pra não sobrescrever dados
	vetor[i] 	   = vetor[i+1];//troca de lugar
	vetor[i+1]  = aux;//troca de lugar pt2
      }
    }
   }
}

int main(){
	bubble_sort();
	mostrar();
	getch;
	return 0;
}
