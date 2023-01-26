#include<stdio.h>
int main()
{
    int n,a,minval;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("Enter a value:\n");
        scanf("%d",&a);

        if(a<minval){
            minval=a;
        }


    }
    printf("Minimum value : \n");
    printf("%d",minval);

    return 0;
}
