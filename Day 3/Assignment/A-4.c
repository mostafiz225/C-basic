#include<stdio.h>
int main()
{
    int n,i,sum=0,a;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==1)
        {
            sum= sum+a;
        }
    }
    printf("sum = %d",sum);
    return 0;
}
