#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("enter the temperatur in celcius:");
    scanf("%f %f",&c,&f);
    f = ((f-32)/180)*100;
    printf("the temperature is %f",f);
    return 0;
}
