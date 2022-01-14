//Write a recursive function that takes a number and returns the sum of all the numbers from zero to that number.
int s=0;
int sum(int n)
{
   
    if(n!=0)
    {
        return n+sum(n-1);
    }
    
}


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Sum=%d",sum(num));
    return 0;
}