#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int result =sum(x);
    printf("%d",result);
    return 0;
}
int sum(int n)
{
   int add = 0;
   for(int i=1; i<=n; i++)
   {
     add = add + i;
   }
   return add;
}
