#include<stdio.h>

int fibo(int n)
{
    if (n==0)
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


int main()
{   
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Sum of %d terms= %d",num,fibo(num));
    return 0;
}