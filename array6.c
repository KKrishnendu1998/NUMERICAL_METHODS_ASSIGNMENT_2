/*print the values of the array before assigning the value(using calloc) */
#include<stdio.h>
#include<stdlib.h>
void main()
{
float *arr;

int i;
arr=(float *)calloc(100,sizeof(float));   //this create an array of 100 float elements //
for(i=0;i<100;i++)
{ 
printf("the %dth element of the array is %f \n",i,*(arr+i));
}
for(i=0;i<100;i++)
{
*(arr+i)=(i+1)*(i+1);    //assignimg value to the array//
}
for(i=0;i<100;i++)
{ 
printf("the %dth element of the array is %f \n",i,*(arr+i));
}
}
//we see that in the both case the initial elements are showing zero//
