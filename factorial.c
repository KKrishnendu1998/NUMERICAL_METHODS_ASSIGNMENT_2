/*factorial in C with measuring time */
#include<stdio.h>
#include<time.h>
#include<unistd.h>
int fact(int n)
{
if(n==0)
return 1;
else
return ( n*fact(n-1));
}

void main()
{
	double time_spent=0.0;
	
	clock_t begin =clock();
int n;
printf("Enter the number : ");
scanf("%d",&n);
if(n<0)
printf("The factorial of the negative number doesn't exist");
else
printf("the factorial of the given number %d  is : %d ",n,fact(n));
sleep(3);
clock_t end=clock();
time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
printf("Time elapsed is %f second ",time_spent);
}
