#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0 ,n;
    printf("Enter any natural numbers:");
    scanf("%d",&n);
    for(int i = 0; i<=n;i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d",sum);
    return 0;

}