#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,h,area;
    printf("enter length ,breadth and height:");
    scanf("%d  %d %d",&l,&b,&h)
    area = l*b*h;
    printf("the area of cuboid is %d",area);
    return 0;
}