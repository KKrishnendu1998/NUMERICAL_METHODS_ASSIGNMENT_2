#include<stdio.h>
#include<stdlib.h>
#include "array_header.h"
	int main(void)
	{
		float* arr;
		float* array;
		int i,n=100;
		arr=(float *)malloc(n*sizeof(float));       //creating array using malloc//
		for(i=0;i<n;i++)
		{
			arr[i]=(i+1)*(i+1);
		}
		for(i=0;i<n;i++)
		{
			printf("the %dth element is : %f \n ",i+1,arr[i]);    
		}
		array=func(arr,n);
		printf("the mean of the elements of the array is %f \n",array[0]);
		printf("the variance of the elements of the array is %f \n ",array[1]);
	}
