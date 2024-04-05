#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    x = f(x);
    printf("Result: %d",x);
    return 0;
}
int f(int x)
{
    if(x<=0)
        return 0;
    int out;
    out= x+f(x-1);
    return out;
}
