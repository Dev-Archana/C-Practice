//sum of array elements 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Array size\n");
	scanf("%d",&n);
	int a[n],i,sum=0;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum Of Given Array\n");
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
