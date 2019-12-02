/*printing the ouput in a text file
creator : Krishnendu Maji */
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
var=(sqsum/n)-mean*mean);            //evaluating variance//
ar=(float *)malloc(2*sizeof(float));
ar[0]=mean;
ar[1]=var;
return ar;                         //returning array containing mean and variance //
free(ar);
}

	
void main()
{
FILE *p,*f;
char c;
float *arr,*array;
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
p=fopen("text.bin","w");
fprintf(p,"the mean and variance of the number of elements are : ");
fprintf(p,"%f	%f",array[0],array[1]);
fclose(p);
f=fopen()
while(c=getfc(f)!=EOF)
{
printf("%c",c);
}
free(arr);
}

