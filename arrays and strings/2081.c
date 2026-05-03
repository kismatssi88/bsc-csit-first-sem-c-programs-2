//5 person age
#include<stdio.h>
#include<conio.h>
int main()
{
    int age[5],i;
    int total=0;
    float average;
    for (i=1;i<=5;i++)
    {
        printf("enter age");
        scanf("%d",age[i]);
    }
    for(i=1;i<=5;i++)
    {
     total=total + age[i];
    }
    average=total/5;
    printf("the avaerage is %f",average);
    for(i=1;i<=5;i++)
    {
        if(age[i]>=25 && age[i]<=30)
        {
            printf("the age is %d",age[i]);
        }
    }
}