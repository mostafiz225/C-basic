#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a>50)
        {
          sum=sum+a;
        }
    }

    printf("sum = %d",sum);
    return 0;
}

