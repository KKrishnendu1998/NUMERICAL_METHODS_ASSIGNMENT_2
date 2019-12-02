/*mean and variance by gslv 
creator : Krishnendu Maji
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gsl/gsl_statistics_float.h>

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
var=(sqsum-mean*mean)/n;            //evaluating variance//
ar=(float *)malloc(2*sizeof(float));
ar[0]=mean;
ar[1]=var;
return ar;                         //returning array containing mean and variance //
free(ar);
}

	
void main()
{
float *arr,*array,*arrr;
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
mean_gsl=gsl_stats_float_mean(arr,1,100);
  var_gsl=gsl_stats_float_variance(arr,1,100);
printf("by gsl Mean of the array elements is:%f\n(by gsl)",mean_gsl);
  printf("by gsl Variance of the array elements is:%f\n(by gsl)",var_gsl);
free(arr);
}

