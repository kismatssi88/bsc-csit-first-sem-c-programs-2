#include<stdio.h>
#include<conio.h>
int main()
{
    int n =2;
    for(int i=n;i<=25;i++)
    {
        if(i!=7){
            printf("%d*%d\t",i,(2*i-1));
        }
        n++;
    }
}