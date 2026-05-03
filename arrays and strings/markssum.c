#include<stdio.h>
#include<conio.h>
int main()
{
    int i,marks[5];
    float average;
    int sum =0;
    for(i=1;i<=5;i++)
    {
        printf("enter marks:");
        scanf("%d",marks[i]);
    }
     for(i=1;i<=5;i++)
    {
        sum=sum + marks[i];
    }
    average = sum/5;
    printf(" the sum is %d ",sum);
    printf("the average is %f",average);
    


}