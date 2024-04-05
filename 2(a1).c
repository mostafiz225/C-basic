#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    int sum =f(x);
    printf("%d",sum);
    return 0;
}
int f(int x)
{
    int cal = x*(x+1)/2 ;
    return cal;
}


