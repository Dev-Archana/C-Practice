//Sum of Array Elements with returning sum to main function
#include<stdio.h>
int sumOfArrayElements(int a[],int size);
int main()
{
	int array_size;
	printf("Enter Array Size\n");
	scanf("%i",&array_size);
	int array1[array_size];
	int i;
	printf("Enter Array Elements\n");
	for(i=0;i<array_size;i++)
	{
		scanf("%i",&array1[i]);
	}
	printf("Array Elements Are\n");
	for(i=0;i<array_size;i++)
	{
		printf("%i\n",array1[i]);
	}
	printf("Sum will be :%i",sumOfArrayElements(array1,array_size));
	return 0;
}
int sumOfArrayElements(int a[],int size)
{
	int i,sum=0;
		for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
