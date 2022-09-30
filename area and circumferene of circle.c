//WAP to find the area and circumference of circle


#include<stdio.h>
main()
{
	float r,pi=3.14;
	printf("Enter the radius:");
	scanf("%f",&r);
	printf("Area of circle: %f\n", pi*r*r);
	printf("Circumference: %f\n", 2*pi*r);
	
}
