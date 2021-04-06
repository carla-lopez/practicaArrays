/*
 ============================================================================
 Name        : practicaArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define TAM 5

int main()
{

int lista[TAM]={12,10,6,1,3};
int num=0;
int i,j;


for (i=1;i<TAM;i++)
{
	for (j=0;j<TAM-1;j++)
	{
		if (lista[j] > lista[j+1])
		{
			num = lista[j];
			lista[j]=lista[j+1];
			lista[j+1]=num;
		}
	}

}

printf("\nLos valores de lista ordenados de menor a mayor son: \n");
for(i=0;i<TAM;i++)
    printf("%3d",lista[i]);

return 0;
}
