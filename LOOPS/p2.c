// 100,90,80 ,.... upto 20
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n=100;
    for(i =1;i<=8;i++)
    {   
        n=n-10;
        printf("%d\t",n);
    }
    return 0;
}