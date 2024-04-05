#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    int sum =f(n);
    printf("%d",sum);
    return 0;
}
int f(int n)
{
    int cal = n*(n+1)*(2*n+1)/6 ;
    return cal;
}

