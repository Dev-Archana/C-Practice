//print max array element
#include<stdio.h>
int main()
{
    int a[5]={1,5,0,2,7};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum Array Element Is:%d \n",max);
    return 0;
}
