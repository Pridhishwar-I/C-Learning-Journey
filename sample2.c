//Write a C program to calculate the sum of the first N natural numbers using a while loop.
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("enter the num you want to find the sum till:");
    scanf("%d",&a);
    while(a!=0)
    {
        sum=a+sum;
        --a;
    }
    printf("%d",sum);
}