//basic arithmetic operators and input from end user
#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
float modulus(int a,int b);
int main()
{
	printf("Enter Any Two Integer values\n");
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	printf("%d\n",sum(a,b));
	printf("%d\n",sub(a,b));
	printf("%d\n",mul(a,b));
	printf("%.1f\n",div(a,b));
	printf("%.2f\n",modulus(a,b));
	return 0;
}
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
float div(int a,int b){
	return a/b;
}
float modulus(int a,int b){
	return a%b;
}

