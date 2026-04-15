#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0; 
    int marks;
    float average;
    for(int i =1; i <=5;i++)
    {
        printf("Enter marks");
        scanf("%d",&marks);
        sum = sum + marks;
    }
    printf("the sum is %d\n",sum);
    average = sum /5;
    printf("the %f is average\n ",average);
    return 0;
}