#include<stdio.h>
int main()
{
    int i=0,n=0,a=0,maxVal=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a>maxVal)
        {
            maxVal=a;
        }
    }
    printf("Maximum value: \n");
    printf("%d",maxVal);
    return 0;
}
