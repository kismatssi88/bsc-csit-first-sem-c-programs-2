#include<stdio.h>
#include<conio.h>
int main()
{
    float m1,m2,m3,m4,m5,total,percentage;
    printf("Enter marks of five subjects:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    total = m1 + m2 + m3 +m4 +m5;
    printf("The total marks is %f\n",total);
    percentage=(total/5);
    printf("the percentage is %f\n ",percentage);
    return 0;
}