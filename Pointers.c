//pointers are special variable we are storing the address of another variables 
#include<stdio.h>
int main()
{
	int n=10;
	int *ptr=&n;
	printf("%d\n",n);
	printf("%d",ptr);
	return 0;
}
