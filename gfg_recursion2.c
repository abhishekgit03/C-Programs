//Write a recursive function that takes a number as an input and returns the factorial of that number.
int s=0;
int fact(int n)
{
   
    if(n==0)
    {
       return 1;
    }
    return n*fact(n-1);
    
}


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial=%d",fact(num));
    return 0;
}