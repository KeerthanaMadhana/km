#include<stdio.h>
int main()
{
int year=2012;
printf("enter a year");
scanf("%d",&year);
if(year%4==0)
printf("leap year");
else
printf("not a leap year");
}
