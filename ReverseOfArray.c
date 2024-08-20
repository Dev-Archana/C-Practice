//Reverse of given array 

#include<stdio.h>
int main()
{
	printf("enter array size\n");
	int n,i;
	scanf("%d",&n);
	printf("Enter Array elements\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int start=0;
	int end=n-1;
	while(start<end)
	{
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		
		start++;
		end--;
	}
	printf("reverse of a array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
