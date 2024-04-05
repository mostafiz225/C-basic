#include<stdio.h>
int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    int sum =f(x);
    printf("%d",sum);
    return 0;
}
int f(int x)
{
    int cal = x*x*x+3*x+5;
    return cal;
}

