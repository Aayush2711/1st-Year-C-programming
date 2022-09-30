//WAP to check the year is leap year or not.

#include<stdio.h>
main()
{
int year;
printf("Enter the year:",year);
scanf("%d",&year);

if((year%4==0)&& ((year%400==0) || (year%100 !=0)))
printf("\nThe year is leap year:%d",year);
else
printf("\nThe year is not leap year:%d",year);
}
