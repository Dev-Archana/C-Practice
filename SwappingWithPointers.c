//Swaping of 2 numbers with pointers
#include<stdio.h>
int main()
{
	int n1=10,n2=20;
	int *n3=&n1;
	int *n4=&n2;
	
	printf("before swapping %d\t%d\n",n1,n2);
	
	int temp=*n3;
	*n3=*n4;
	*n4=temp;
	printf("after swapping %d\t%d\n",n1,n2);
	return 0;
}
