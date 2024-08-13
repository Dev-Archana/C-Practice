//array declaration and inserting the value from the end user
#include<stdio.h>
int main()
{
	int size_of_array;
	printf("Enter Size Of An Array\n");
	scanf("%d",&size_of_array);
	int array1[size_of_array];
	int i;
	printf("Enter Array Elements\n");
	for(i=0;i<size_of_array;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Array Elements Are\n");
		for(i=0;i<size_of_array;i++)
	{
		printf("%d\n",array1[i]);
	}
	return 0;
}
