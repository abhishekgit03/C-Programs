#include<stdio.h>

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}


int main()
{   
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}