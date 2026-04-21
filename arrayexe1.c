//Write a C program to find the largest element in an array of integers.
#include<stdio.h>
int main()
{
    int sum=0;
    int a[10];
    for(int i=0;i<10;++i)
    {
       printf("enter the number:");
       scanf("%d",&a[i]);
    }
    for(int i=0;i<10;++i)
    {
        if(a[i]>sum)
        {
            sum=a[i];
        }
    }
    printf("the largest num is=%d",sum);
}
