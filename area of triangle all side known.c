//Write a C program to find the area of triangle when we know the lengths of all three of its sides.

#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,area,s;
	
	printf("Enter three sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
	
	s=(a+b+c)/2; //formula for finding the value of s
	
	
	area= sqrt(s*(s-a)*(s-b)*(s-c)); //Main formula 
	printf("The area is :%f",area);
}
