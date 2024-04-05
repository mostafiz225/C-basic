#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value : ");
    scanf("%d %d",&x,&y);
    int sum =f(x,y);
    printf("%d",sum);
    return 0;
}
int f(int x, int y)
{
    int cal = x*x+x*y-9;
    return cal;
}


