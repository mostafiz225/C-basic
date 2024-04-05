
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value : ");
    scanf("%d %d %d",&x,&y,&z);
    int sum =f(x,y,z);
    printf("%d",sum);
    return 0;
}
int f(int x, int y, int z)
{
    int cal = x*x+2*y*z-z*z;
    return cal;
}


