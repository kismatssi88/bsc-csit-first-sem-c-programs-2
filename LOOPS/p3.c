#include<stdio.h>
#include<conio.h>
int main()
{
    int i ,n = 1000, diff=400;
    for(i =1;i<=6;i++)
    {
        printf("%d\t",n);
        n = n - diff;
        diff=diff/2;
        
    }
    return 0;

}
