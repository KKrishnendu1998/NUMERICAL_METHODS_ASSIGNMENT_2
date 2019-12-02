/*printing the output on a binary file and writing a c code to read the contents of the binary file */
#include<stdio.h>
#include<stdlib.h>
float* func(float arr[],int n)// a functin that takes array of arbitary
{
	
int i ;
float* array = malloc(2* sizeof(float));

for(i = 0;i<n;i++)
{
	array[0]+=arr[i];
	array[1]+=arr[i]*arr[i];
}
array[0] = array[0]/n;
array[1] = array[1]/n;
array[1] = (array[1] - array[0]*array[0]);
return array;
} 
int main(void)
{
	float *np = NULL;
	np= (float*)malloc(100 * sizeof(float));
	int i = 0;
	for(i = 0;i<100;i++)
		{np[i] = (i+1)*(i+1);}
	FILE *fp;
	fp = fopen( "file.bin" , "wb" );
	 float* arr = func(np,100);
    fwrite(arr , 4 , sizeof(float) , fp );
   fclose(fp);
	FILE *fp;
	 fp = fopen( "P:/Krishnendu/c programs/file.bin" , "rb" );
	 float* output;
    fread(output , 4 , sizeof(float) , fp );
   fclose(fp);
   printf("mean of the data  = %f",output[0]);
   printf("\nvariance of the data = %f \n",output[1]);
	free(np);
}
