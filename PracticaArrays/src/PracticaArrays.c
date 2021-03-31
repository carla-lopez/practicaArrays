/*
 ============================================================================
 Name        : PracticaArrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define NUM 5


int main(void) {

	int miArray[NUM];
	int max;

	for(int i=0;i< NUM;i++)
	{
		printf("%d) Ingrese numero: ",i+1);
		scanf("%d",& miArray[i]);
	}
	if(!(arr_calcularMaximoInt(miArray,NUM,&max)))
	{
		printf("El max es:  %d\n",max);

	}
	return 0;
}
