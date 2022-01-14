#include<stdio.h>
void odd();
void eve();
int n=1;
void odd()
{
    if(n<=10)
    {
        printf("%d ",(n+1));
        n++;
        eve();
    }
}

void eve()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
}

int main()
{
    odd();
}