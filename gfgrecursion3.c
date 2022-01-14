//Write a recursive function that takes a number ‘n’ and returns the nth number of the Fibonacci number.
int s=0;
int fibo(int n)
{if (n==0)
    {
        return 0;
    }  
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a term:");
    scanf("%d",&num);
    printf("Sum=%d",fibo(num));
    return 0;
}