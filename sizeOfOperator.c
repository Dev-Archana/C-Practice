//calculating size of basic datatypes
#include<stdio.h>
int main()
{
	int n;
	float n1=3.142;
	double n2=8.0;
	char c='$';
	printf("%ul\n",sizeof(n));
	printf("%.2f\n",sizeof(n1));
	printf("%.2lf\n",sizeof(n2));
	printf("%f",sizeof(c));
	return 0;
}
