//Write a C program in C to find the area and perimeter of a rectangle.


#include<stdio.h>
main()
{
	int length,width, area,p;	
	printf("Enter the lenght:");
	scanf("%d",&length);
	
	printf("\nEnter the width:");
	scanf("%d",&width);
	
	area=(length*width);
	printf("\nThe Area is:%d",area);
	
	p=2*(length+width);
	printf("\nThe perimeter is:%d",p);


}
