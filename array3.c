/*creating a function that takes an array of arbitrary length a returns an array of two elements .The first element of the output array is the mean of the input array and the second element of the output array is the variance of the input array 
creator : Krishnendu Maji*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float *func(float *arr,int n)
{
float mean,var,sum=0.0,sqsum=0.0,*ar;
int i;
for(i=0;i<n;i++)
{ 
sum+=arr[i];
sqsum+=arr[i]*arr[i];
}
mean=sum/n;                         //evaluating mean //
var=(sqsum/n)-mean*mean;            //evaluating variance//
ar=(float *)malloc(2*sizeof(float));
ar[0]=mean;
ar[1]=var;
return ar;                         //returning array containing mean and variance //
free(ar);
}

	
void main()
{
float *arr,*array,*arrr;
int i,n;
printf("enter the number of elements of the array : ");     //taking input from user for the number of elements in the array //
scanf("%d",&n);
arr=(float *)malloc(n*sizeof(float));       //creating array using malloc//
for(i=0;i<n;i++)
{
printf("the %dth  element of the array is :",i+1);
scanf("%f",&arr[i]);                   //taking inputs for the array elements //
}
for(i=0;i<n;i++)
{
printf("the %dth element is : %f \n ",i+1,arr[i]);    
}
array=func(arr,n);
printf("the mean of the elements of the array is %f \n",array[0]);
printf("the variance of the elements of the array is %f \n ",array[1]);
free(arr);
}


