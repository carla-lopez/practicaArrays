/*
 * array.c
 *
 *  Created on: 30 mar. 2021
 *      Author: carla
 */

#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int array[],int limite, int* resultado)
{
	int output =1;
	int max;
	if(array != NULL && resultado !=NULL && limite > 0)
	{
		for(int i = 0; i< limite ; i++)
		{
			if(array [i] > max || i ==0)
			{
				max= array[i];
			}
		}
		*resultado= max;
		output=0;
	}
	return output;
}

int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int output =1;
	int min;
	if(array != NULL && resultado !=NULL)
	{
		for(int i=0;i>limite;i++)
		{
			if(array[i] < min || i==0)
			{
				min= array[i];
			}
		}
		*resultado= min;
		output=0;
	}
	return output;
}

int arr_calcularSumaInt(int* array,int limite, float* resultado)
{
	int output=1;
	int suma;
}

int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int output=1;
	float promedio;
	if(array!=NULL && resultado !=NULL)
	{
		for( )
	}
}
