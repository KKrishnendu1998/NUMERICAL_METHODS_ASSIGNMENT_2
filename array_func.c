#include<stdio.h>
#include<stdlib.h>
float* func(float *arr,int n)
{
float mean,var,sum=0.0,sqsum=0.0,*ar;
int i;
for(i=0;i<n;i++)
{ 
sum+=arr[i];
sqsum+=arr[i]*arr[i];
}
mean=sum/n;                         //evaluating mean //
var=(sqsum-mean*mean)/n;            //evaluating variance//
ar=(float *)malloc(2*sizeof(float));
ar[0]=mean;
ar[1]=var;
return ar;                         //returning array containing mean and variance //
free(ar);
}
