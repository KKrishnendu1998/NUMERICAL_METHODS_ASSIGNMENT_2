/*maximum machine number */
#include<stdio.h>
void main()
{
int i=1;
char a=' ';
long int k=100000;
while(i>0)
{ 
i++;
}
printf("the minimum integer number is : %d ",i);
printf("the maximum integer number is : %d ",i-1);
while((char)a+1>=0)
{ 
a++;
}
printf("the minimum char number is : %d ",a);
a--;
printf("the maximum char number is : %d ",a);
while(k>0)
{ 
k++;
}
printf("the minimum integer number is : %ld ",k);
printf("the maximum integer number is : %ld ",k-1);
}
