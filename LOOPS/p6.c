#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    //decreasing 
    for(i=n;i<=0;i--)
    {
        printf("%d\t",i);

    }
    //increasing
    for(i=1;i<=n;i++){
        printf("%d\t",i);
    }
    return 0;
}