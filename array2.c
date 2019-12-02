/*assigning the values 1^2,2^2... 100^2 to the array 
creator : Krishnendu Maji*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
float *arr;

int i;
arr=(float *)malloc(100*sizeof(float));   //this create an array of 100 float elements //
for(i=0;i<100;i++)
{
*(arr+i)=(i+1)*(i+1);    //assignimg value to the array//
}
for(i=0;i<100;i++)
{ 
printf("the %dth element of the array is %f \n",i,*(arr+i));
}
}
