#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int x= f(n);
    printf("Result: %d",x);
    return 0;
}
int f(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n>1)
    {
        int out;
        out= f(n-1)+f(n-2);
        return out;
    }

}


