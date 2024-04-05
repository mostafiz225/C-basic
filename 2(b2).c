#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    n= f(n);
    printf("Result: %d",n);
    return 0;
}
int f(int n)
{
    if(n<=0)
        return 0;
    int out;
    out= n*n+f(n-1);
    return out;
}

