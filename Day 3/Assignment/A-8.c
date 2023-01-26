#include<stdio.h>
int main()
{
    int n,a,sum=0,avg=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    avg=sum/n;
    printf("sum = %d",avg);
    return 0;
}


