#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0, i = 1;
        while(i<=100)
    {
        sum = sum + i;
        i++;
    }
    printf("the sum is %d",sum);
    return 0;
}