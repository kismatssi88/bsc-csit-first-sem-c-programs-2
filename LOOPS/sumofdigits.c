#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum = 0, rem;
    printf("enter numbers");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("the sum is %d",sum);
    return 0;

}